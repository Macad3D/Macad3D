
[Code]
var
  DependencyPage: TOutputProgressWizardPage;
  AnyDependencyNeeded: boolean;
  VCRedistNeeded: boolean;
  DotNetNeeded: boolean;

function IsVCRedistInstalled(): Boolean;
var
  major: Cardinal;
  minor: Cardinal;
  bld: Cardinal;
  rbld: Cardinal;
  key: String;
begin
  Result := False;
  key := 'SOFTWARE\Microsoft\VisualStudio\14.0\VC\Runtimes\x64';
  if RegQueryDWordValue(HKEY_LOCAL_MACHINE, key, 'Major', major) then 
  begin
    if RegQueryDWordValue(HKEY_LOCAL_MACHINE, key, 'Minor', minor) then 
    begin
      if RegQueryDWordValue(HKEY_LOCAL_MACHINE, key, 'Bld', bld) then 
      begin
        if RegQueryDWordValue(HKEY_LOCAL_MACHINE, key, 'RBld', rbld) then 
        begin
            Log('VC Redist Major is: ' + IntToStr(major) + ' Minor is: ' + IntToStr(minor) + ' Bld is: ' + IntToStr(bld) + ' Rbld is: ' + IntToStr(rbld));
            // Note brackets required because of weird operator precendence
            Result := (major >= {#VcRedistMajor}) and (minor >= {#VcRedistMinor}) and ({#VcRedistBuild} >= 24212)
        end;
      end;
    end;
  end;
end;

///////////////////////////////////////////////////////////////////////////////

function InstallVCRedist(var NeedsRestart: Boolean): String;
var
  ResultCode: Integer;
begin
  Result := '';
 	DependencyPage.SetText('Installing Microsoft Visual C++ Runtime {#VcRedistRelease}...', '');
  ExtractTemporaryFile('vc_redist.x64.exe');
  if not Exec(ExpandConstant('{tmp}\vc_redist.x64.exe'), '/q /norestart', '', SW_SHOW, ewWaitUntilTerminated, ResultCode) then
  begin
    Result := 'Installation of Microsoft Visual C++ Runtime cannot be started due to the following error: ' +
              + 'Code ' + IntToStr(ResultCode) + ' - ' + SysErrorMessage(ResultCode) + '.' + #13#10;
    Exit;
  end;
  if( ResultCode <> 0 ) then
  begin
    if (ResultCode = 1641) or (ResultCode = 3010) then 
    begin
      NeedsRestart := True;
    end else begin
      Result := 'Installation of Microsoft Visual C++ Runtime failed with code: ' + IntToStr(ResultCode) + '.' + #13#10;
    end;
  end;
end;

///////////////////////////////////////////////////////////////////////////////

function CheckDotNetByPath(): boolean;
var
  rtstr: string;
  FindRec: TFindRec;
begin
  Result := False;
  if FindFirst(AddBackslash(ExpandConstant('{commonpf}')) + 'dotnet\shared\{#DotNetRuntime}\{#DotNetRelease}.*', FindRec) then
  try
    repeat
      if (FindRec.Attributes and FILE_ATTRIBUTE_DIRECTORY <> 0) then
      begin
        // Get minor version
        rtstr := '{#DotNetRelease}.';
        if StrToIntDef(Copy(FindRec.Name, Length(rtstr)+1, Length(FindRec.Name)-Length(rtstr)), 0) >= {#DotNetMinPatch} then begin
          Result := true;
          MsgBox('OK', mbInformation, MB_OK);
          exit;
        end;
      end;
    until Result or (not FindNext(FindRec));
  finally
    FindClose(FindRec);
  end;
end;

///////////////////////////////////////////////////////////////////////////////

function CheckDotNetByDotNetExe(): boolean;
var
  TmpFileName, rtstr, tmpstr: string;
  ExecStdout: TArrayOfString;
  ResultCode, line, cpos: integer;
begin
  Result := False;
  TmpFileName := ExpandConstant('{tmp}') + '\dotnet_runtimes.txt';
  if Exec(ExpandConstant('{cmd}'), '/C dotnet.exe --list-runtimes > "' + TmpFileName + '"', '', SW_HIDE, ewWaitUntilTerminated, ResultCode) then
  begin
    if LoadStringsFromFile(TmpFileName, ExecStdout) then
    begin
      DeleteFile(TmpFileName);              
      // Search for entries which match runtime and (major) release
      rtstr := '{#DotNetRuntime} {#DotNetRelease}.';
      for line := 0 to GetArrayLength(ExecStdout)-1 do begin
        tmpstr := Copy(ExecStdout[line], 0, Length(rtstr));
        if SameText(tmpstr, rtstr) then
        begin
          // Get minor version
          cpos := Pos('[', ExecStdout[line]);
          if cpos > 0 then
          begin
            if StrToIntDef(Copy(ExecStdout[line], Length(rtstr)+1, cpos-Length(rtstr)-2), 0) >= {#DotNetMinPatch} then begin
              Result := true;
              exit;
            end;
          end;
        end;
      end;
    end;
  end;
end;
      
///////////////////////////////////////////////////////////////////////////////

function IsDotNetInstalled(): boolean;
begin
  Result := CheckDotNetByDotNetExe;
  if not Result then
  begin
    Result := CheckDotNetByPath;
  end;
end;

///////////////////////////////////////////////////////////////////////////////
              
function InstallDotNet(var NeedsRestart: Boolean): String;
var
  ResultCode: Integer;
begin
  // Uncomment the following two lines for testing error message display
  //Result := 'Installation of Microsoft .NET Desktop Runtime {#DotNetVersion} failed with code: ' + IntToStr(ResultCode) + '.' + #13#10;
  //Exit;
 
   Result := '';
   DependencyPage.SetText('Installing Microsoft .NET Desktop Runtime {#DotNetRelease}...', '');
   ExtractTemporaryFile('{#DotNetRedistFile}');
   if not Exec(ExpandConstant('{tmp}\{#DotNetRedistFile}'), '/install /norestart /quiet', '', SW_SHOW, ewWaitUntilTerminated, ResultCode) then
   begin
     Result := 'Installation of Microsoft .NET Desktop Runtime {#DotNetVersion} cannot be started due to the following error: ' +
               + 'Code ' + IntToStr(ResultCode) + ' - ' + SysErrorMessage(ResultCode) + '.' + #13#10;
     Exit;
   end;
   if( ResultCode <> 0 ) then
   begin
     if (ResultCode = 1641) or (ResultCode = 3010) then 
     begin
       NeedsRestart := True;
     end else begin
       Result := 'Installation of Microsoft .NET Desktop Runtime {#DotNetVersion} failed with code: ' + IntToStr(ResultCode) + '.' + #13#10;
     end;
   end;
end;

///////////////////////////////////////////////////////////////////////////////

function InstallDependencies(var NeedsRestart: Boolean): String;
begin
  Result := '';

  if AnyDependencyNeeded then begin
    try
  	  DependencyPage := CreateOutputProgressPage('Installing dependencies', 'Please wait while Setup installs dependencies on your computer.');
      DependencyPage.Show;
      DependencyPage.ProgressBar.Style := npbstMarquee;
      DependencyPage.ProgressBar.Show;

      // Install VC Redist
      if VCRedistNeeded then begin
        Result := Result + InstallVCRedist(NeedsRestart);
        VCRedistNeeded := false;
      end;

      // Install .Net Framework
      if DotNetNeeded then begin
        Result := Result + InstallDotNet(NeedsRestart);
        DotNetNeeded := false;
      end;

    finally
      DependencyPage.Hide;
    end;
  end;
end;

///////////////////////////////////////////////////////////////////////////////
         
procedure CheckDependencies();
begin
  VCRedistNeeded := not IsVCRedistInstalled();
  DotNetNeeded := not IsDotNetInstalled();

  AnyDependencyNeeded := VCRedistNeeded or DotNetNeeded;
end;

///////////////////////////////////////////////////////////////////////////////
        
function GetDependenciesMemo(Space, NewLine: String): String;
var
  S: String;
begin
  S := '';

  if AnyDependencyNeeded then begin
    S := 'Install Dependencies' + NewLine;
    if VCRedistNeeded then
      S := S + Space + 'Microsoft Visual C++ Runtime {#VcRedistRelease}' + NewLine;
    if DotNetNeeded then
      S := S + Space + 'Microsoft .NET Desktop Runtime {#DotNetRelease}' + NewLine;
    S := S + NewLine;
  end;
  Result := S;
end;

///////////////////////////////////////////////////////////////////////////////
 