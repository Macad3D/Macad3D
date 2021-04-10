
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
 	DependencyPage.SetText('Installing Microsoft Visual C++ {#VcRedistDisplayedVersion} Runtime...', '');
  ExtractTemporaryFile('vcredist_x64.exe');
  if not Exec(ExpandConstant('{tmp}\vcredist_x64.exe'), '/q /norestart', '', SW_SHOW, ewWaitUntilTerminated, ResultCode) then
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

function IsDotNetInstalled(): boolean;
var
  ResultCode: Integer;
begin
  Result := False;
  ExtractTemporaryFile(ExtractFileName('{#DotNetCheckPath}'));
  if Exec(ExpandConstant('{tmp}\') + ExtractFileName('{#DotNetCheckPath}'), '{#DotNetRuntime} {#DotNetVersion}', '', SW_HIDE, ewWaitUntilTerminated, ResultCode) then
  begin
    Result := ResultCode = 0;
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
      S := S + Space + 'Microsoft Visual C++ {#VcRedistDisplayedVersion} Runtime' + NewLine;
    if DotNetNeeded then
      S := S + Space + 'Microsoft .NET Desktop Runtime {#DotNetRelease}' + NewLine;
    S := S + NewLine;
  end;
  Result := S;
end;

///////////////////////////////////////////////////////////////////////////////
 