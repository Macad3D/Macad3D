
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

// https://docs.microsoft.com/en-us/dotnet/framework/migration-guide/versions-and-dependencies
function IsDotNetInstalled(): boolean;
var
  key: string;
  install, release: cardinal;
begin
  Result := False;
  key := 'SOFTWARE\Microsoft\NET Framework Setup\NDP\v{#DotNetMajor}\Full';
  if RegQueryDWordValue(HKLM, key, 'Install', install) then begin
    if RegQueryDWordValue(HKLM, key, 'Release', release) then begin
      Log('DotNet Framework is installed: ' + IntToStr(install) + ' Release: ' + IntToStr(release));
      Result := (install = 1) and (release >= {#DotNetRelease});
    end;
  end;
end;

///////////////////////////////////////////////////////////////////////////////
              
function InstallDotNet(var NeedsRestart: Boolean): String;
var
  ResultCode: Integer;
begin
  // Uncomment the following three lines for testing error message display
  //Result := 'Installation of Microsoft .NET Framework {#DotNetDisplayedVersion} failed with code: ' + //IntToStr(ResultCode) + '.' + #13#10;
  //Exit;

  Result := '';
  DependencyPage.SetText('Installing Microsoft .NET Framework {#DotNetDisplayedVersion}...', '');
  ExtractTemporaryFile(ExtractFileName('{#DotNetInstaller}'));
  if not Exec(ExpandConstant('{tmp}\' + ExtractFileName('{#DotNetInstaller}')), '/norestart /passive', '', SW_SHOW, ewWaitUntilTerminated, ResultCode) then
  begin
    Result := 'Installation of Microsoft .NET Framework {#DotNetDisplayedVersion} cannot be started due to the following error: ' +
              + 'Code ' + IntToStr(ResultCode) + ' - ' + SysErrorMessage(ResultCode) + '.' + #13#10;
    Exit;
  end;
  if( ResultCode <> 0 ) then
  begin
    if (ResultCode = 1641) or (ResultCode = 3010) then 
    begin
      NeedsRestart := True;
    end else begin
      Result := 'Installation of Microsoft .NET Framework {#DotNetDisplayedVersion} failed with code: ' + IntToStr(ResultCode) + '.' + #13#10;
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
      S := S + Space + 'Microsoft .NET Framework {#DotNetDisplayedVersion}' + NewLine;
    S := S + NewLine;
  end;
  Result := S;
end;

///////////////////////////////////////////////////////////////////////////////
 