#*******************************************************************************
#
# E M B E D D E D   W I Z A R D   P R O J E C T
#
#                                                Copyright (c) TARA Systems GmbH
#                                    written by Paul Banach and Manfred Schweyer
#
#
# PowerShell script for modification of the STM32CubeIDE project configuration file
# according to Embedded Wizard project settings (color format, screen
# orientation, generated source files)
#
#*******************************************************************************

# the window title
$host.ui.RawUI.WindowTitle = "Embedded Wizard Post Process - updating STM32CubeIDE project configuration"
$executingScriptDirectory  = Split-Path -Path $MyInvocation.MyCommand.Definition -Parent

# check for PowerShell version
$invalidPsVersion = 0
$psVersion        = $PSVersionTable.PSVersion
if ( $psVersion )
{
  Write-Host "PowerShell version: " $psVersion
  If($psVersion -lt '4.0') {
    $invalidPsVersion = 1;
  }
}
Else {
  Write-Host "No PowerShell Version found"
  $invalidPsVersion = 1;
}

if ( $invalidPsVersion ) {
  Write-Host This Embedded Wizard Post Process needs at least V4.0 of Windows Powershell
  Write-Host Powershell update can be found at:
  Write-Host https://docs.microsoft.com/en-us/powershell/scripting/setup/installing-windows-powershell
  Write-Host
  Read-Host Press Enter to continue | Out-Null
  [Environment]::Exit(10)
}

######################### CHECK PRO VERSION ############################
$executingScriptDirectory = Split-Path -Path $MyInvocation.MyCommand.Definition -Parent
$Path = Join-Path $executingScriptDirectory "../../../../PlatformPackage/RTE/ewcolor.c"

$UseLibaries = 1
if (Test-Path $path)
{
    $UseLibaries = 0
}

######################### PARSE EWFILES.INC ############################
$executingScriptDirectory = Split-Path -Path $MyInvocation.MyCommand.Definition -Parent
$Path = Join-Path $executingScriptDirectory "../../../GeneratedCode/ewfiles.inc"

# Get color format
$ColorFormat = 0
$NewColorFormat = "default"
If (Select-String -Path $Path -Pattern "RGBA8888" -SimpleMatch -Quiet)
{
    $ColorFormat = 1
    $NewColorFormat = "RGBA8888"
}
If (Select-String -Path $Path -Pattern "RGBA4444" -SimpleMatch -Quiet)
{
    $ColorFormat = 2
    $NewColorFormat = "RGBA4444"
}
If (Select-String -Path $Path -Pattern "RGB888" -SimpleMatch -Quiet)
{
    $ColorFormat = 3
    $NewColorFormat = "RGB888"
}
If (Select-String -Path $Path -Pattern "RGB565" -SimpleMatch -Quiet)
{
    $ColorFormat = 4
    $NewColorFormat = "RGB565"
}
If (Select-String -Path $Path -Pattern "LumA44" -SimpleMatch -Quiet)
{
    $ColorFormat = 5
    $NewColorFormat = "LumA44"
}
If (Select-String -Path $Path -Pattern "Index8" -SimpleMatch -Quiet)
{
    $ColorFormat = 6
    $NewColorFormat = "Index8"
}

# check, if requested color format is supported
$ppDir = Join-Path $executingScriptDirectory "../../../../PlatformPackage/$NewColorFormat"
if ( -Not ( Test-Path -Path $ppDir ))
{
  Write-Host "Selected color format" $NewColorFormat "not supported!"
  Read-Host Press Enter to continue | Out-Null
  [Environment]::Exit(8)
}

# Get screen orientation
$ScreenOrientation = 0
If (Select-String -Path $Path -Pattern "90" -SimpleMatch -Quiet)
{
    $ScreenOrientation = 90
}

If (Select-String -Path $Path -Pattern "180" -SimpleMatch -Quiet)
{
    $ScreenOrientation = 180
}

If (Select-String -Path $Path -Pattern "270" -SimpleMatch -Quiet)
{
    $ScreenOrientation = 270
}

######################### EDIT STM32CubeIDE PROJECT ############################
# Open file
$executingScriptDirectory = Split-Path -Path $MyInvocation.MyCommand.Definition -Parent
$Path = Join-Path $executingScriptDirectory ".cproject"

if ( -Not ( Test-Path -Path $Path ))
{
  Write-Host STM32CubeIDE project configuration file not found at path:
  Write-Host $Path
  Write-Host
  Read-Host Press Enter to continue | Out-Null
  [Environment]::Exit(6)
}

# Edit text file content for XML add on
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/RTE&quot;"', '"../../../../PlatformPackage/RTE"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/RGBA8888&quot;"', '"../../../../PlatformPackage/RGBA8888"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/RGBA4444&quot;"', '"../../../../PlatformPackage/RGBA4444"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/RGB888&quot;"', '"../../../../PlatformPackage/RGB888"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/RGB565&quot;"', '"../../../../PlatformPackage/RGB565"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/LumA44&quot;"', '"../../../../PlatformPackage/LumA44"') | Set-Content $Path
(Get-Content $Path).replace('"&quot;${ProjDirPath}/../../../../PlatformPackage/Index8&quot;"', '"../../../../PlatformPackage/Index8"') | Set-Content $Path

$xml = [xml](get-content $Path)
$xml.Load($Path)

# Check project id
If (-Not (Select-String -Path $Path -Pattern "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937" -SimpleMatch -Quiet))
{
  Write-Host This 'Embedded Wizard' post process is configured for the predefined STM32CubeIDE
  Write-Host project file which is a part of the original build environment. If you want to use
  Write-Host this post process for your own projekt, please adapt the project ID in the
  Write-Host powershell script.
  Write-Host
  Read-Host Press Enter to continue | Out-Null
  [Environment]::Exit(10)
}

######################### PATHS ############################
# Select include path node
$target = ((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"})

# Delete all color format dependents include paths if them exist
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RTE"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq ""})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGBA8888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGBA4444"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGB888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGB565"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/LumA44"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Include paths (-I)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/Index8"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

# Insert new necessary include paths
$addElem = $xml.CreateElement("listOptionValue")
$addAtt = $xml.CreateAttribute("builtIn")
$addAtt.Value = "false"
$addElem.Attributes.Append($addAtt) | Out-Null
$addAtt = $xml.CreateAttribute("value")
$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RTE&quot;"
$addElem.Attributes.Append($addAtt) | Out-Null
$target.AppendChild($addElem) | Out-Null

$addElem = $xml.CreateElement("listOptionValue")
$addAtt = $xml.CreateAttribute("builtIn")
$addAtt.Value = "false"
$addElem.Attributes.Append($addAtt) | Out-Null
$addAtt = $xml.CreateAttribute("value")
switch($ColorFormat)
{
    1 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGBA8888&quot;"}
    2 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGBA4444&quot;"}
    3 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGB888&quot;"}
    4 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGB565&quot;"}
    5 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/LumA44&quot;"}
    6 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/Index8&quot;"}
    default {Write-Host Failed to change color format path!}
}
$addElem.Attributes.Append($addAtt) | Out-Null
$target.AppendChild($addElem) | Out-Null

######################### SYMBOLS ############################
# Select symbol node
$target = ((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"})

# Delete all color format dependents symbols
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq ""})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGBA8888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGBA4444"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_LumA44"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_Index8"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

# Insert new color format dependents symbols
$addElem = $xml.CreateElement("listOptionValue")
$addAtt = $xml.CreateAttribute("builtIn")
$addAtt.Value = "false"
$addElem.Attributes.Append($addAtt) | Out-Null
$addAtt = $xml.CreateAttribute("value")
switch($ColorFormat)
{
    1 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGBA8888"}
    2 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGBA4444"}
    3 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB888"}
    4 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565"}
    5 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_LumA44"}
    6 {$addAtt.Value = "EW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_Index8"}
    default {Write-Host Failed to change color format symbol!}
}
$addElem.Attributes.Append($addAtt) | Out-Null
$target.AppendChild($addElem) | Out-Null

# Select symbol node
$target = ((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"})

# Delete all color format dependents symbols
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq ""})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_SURFACE_ROTATION=0"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_SURFACE_ROTATION=90"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_SURFACE_ROTATION=180"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Compiler"}).option|where {$_.name -eq "Define symbols (-D)"}).listOptionValue|where {$_.value -eq "EW_SURFACE_ROTATION=270"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

# Insert new color format dependents symbols
$addElem = $xml.CreateElement("listOptionValue")
$addAtt = $xml.CreateAttribute("builtIn")
$addAtt.Value = "false"
$addElem.Attributes.Append($addAtt) | Out-Null
$addAtt = $xml.CreateAttribute("value")
switch($ScreenOrientation)
{
    0 {$addAtt.Value = "EW_SURFACE_ROTATION=0"}
    90 {$addAtt.Value = "EW_SURFACE_ROTATION=90"}
    180 {$addAtt.Value = "EW_SURFACE_ROTATION=180"}
    270 {$addAtt.Value = "EW_SURFACE_ROTATION=270"}
    default {Write-Host Failed to change libary!}
}
$addElem.Attributes.Append($addAtt) | Out-Null
$target.AppendChild($addElem) | Out-Null

######################### LIBARY PATHS ############################
# Select libary path node
$target = ((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"})

# Delete rte path
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RTE"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

# Delete all color format dependents libary paths if them exist
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq ""})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGBA8888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGBA4444"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGB888"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/RGB565"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/LumA44"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Library search path (-L)"}).listOptionValue|where {$_.value -eq "../../../../PlatformPackage/Index8"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

if($UseLibaries)
{
    # Insert new libary path
    $addElem = $xml.CreateElement("listOptionValue")
    $addAtt = $xml.CreateAttribute("builtIn")
    $addAtt.Value = "false"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $addAtt = $xml.CreateAttribute("value")
    $addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RTE&quot;"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $target.AppendChild($addElem) | Out-Null

    $addElem = $xml.CreateElement("listOptionValue")
    $addAtt = $xml.CreateAttribute("builtIn")
    $addAtt.Value = "false"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $addAtt = $xml.CreateAttribute("value")
    switch($ColorFormat)
    {
        1 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGBA8888&quot;"}
        2 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGBA4444&quot;"}
        3 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGB888&quot;"}
        4 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/RGB565&quot;"}
        5 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/LumA44&quot;"}
        6 {$addAtt.Value = "&quot;`${ProjDirPath}/../../../../PlatformPackage/Index8&quot;"}
        default {Write-Host Failed to change libary path!}
    }
    $addElem.Attributes.Append($addAtt) | Out-Null
    $target.AppendChild($addElem) | Out-Null
}

######################### LIBARIES ############################
# Select libary node
$target = ((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"})

# Delete rte include
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq "ewrte-m7-gcc"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

# Delete all libary includes if them exist
$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq ""})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq "ewgfx-m7-gcc"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq "ewgfx-m7-r90-gcc"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq "ewgfx-m7-r180-gcc"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

$DeleteNode = (((((((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).folderInfo.toolChain)|where {$_.name -eq "MCU ARM GCC"}).tool|where {$_.name -eq "MCU GCC Linker"}).option|where {$_.name -eq "Libraries (-l)"}).listOptionValue|where {$_.value -eq "ewgfx-m7-r270-gcc"})
if($DeleteNode) { $target.RemoveChild($DeleteNode) | Out-Null }

if($UseLibaries)
{
    # Insert new libary include
    $addElem = $xml.CreateElement("listOptionValue")
    $addAtt = $xml.CreateAttribute("builtIn")
    $addAtt.Value = "false"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $addAtt = $xml.CreateAttribute("value")
    switch($ScreenOrientation)
    {
        0 {$addAtt.Value = "ewgfx-m7-gcc"}
        90 {$addAtt.Value = "ewgfx-m7-r90-gcc"}
        180 {$addAtt.Value = "ewgfx-m7-r180-gcc"}
        270 {$addAtt.Value = "ewgfx-m7-r270-gcc"}
        default {Write-Host Failed to change libary!}
    }
    $addElem.Attributes.Append($addAtt) | Out-Null
    $target.AppendChild($addElem) | Out-Null

    # Insert new libary include
    $addElem = $xml.CreateElement("listOptionValue")
    $addAtt = $xml.CreateAttribute("builtIn")
    $addAtt.Value = "false"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $addAtt = $xml.CreateAttribute("value")
    $addAtt.Value = "ewrte-m7-gcc"
    $addElem.Attributes.Append($addAtt) | Out-Null
    $target.AppendChild($addElem) | Out-Null
}

######################### EXCLUDES FROM BUILD ############################
$target = (((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).sourceEntries.entry).excluding

$CurrentColorFormat = ""
$NewColorFormat = ""

If ($target -notmatch 'RGBA8888') { $CurrentColorFormat = "RGBA8888" }
If ($target -notmatch 'RGBA4444') { $CurrentColorFormat = "RGBA4444" }
If ($target -notmatch 'RGB888') { $CurrentColorFormat = "RGB888" }
If ($target -notmatch 'RGB565') { $CurrentColorFormat = "RGB565" }
If ($target -notmatch 'LumA44') { $CurrentColorFormat = "LumA44" }
If ($target -notmatch 'Index8') { $CurrentColorFormat = "Index8" }

switch($ColorFormat)
{
    1 {$NewColorFormat = "RGBA8888"}
    2 {$NewColorFormat = "RGBA4444"}
    3 {$NewColorFormat = "RGB888"}
    4 {$NewColorFormat = "RGB565"}
    5 {$NewColorFormat = "LumA44"}
    6 {$NewColorFormat = "Index8"}
    default {Write-Host Failed to configure exclude paths!}
}

if($CurrentColorFormat -ne $NewColorFormat)
{
    $Newtarget = $target -replace $NewColorFormat, $CurrentColorFormat
    (((($xml.cproject.storageModule.cconfiguration|where {$_.id -eq "com.st.stm32cube.ide.mcu.gnu.managedbuild.config.exe.debug.136079937"}).storageModule|where {$_.moduleId -eq "cdtBuildSystem"}).configuration|where {$_.name -eq "BUILD"}).sourceEntries.entry).excluding = $Newtarget
}

# Save and close file
$xml.Save($Path)

# Adapt ampersand
(get-content $Path) | foreach-object {$_ -replace "amp;quot;", "quot;"} | set-content $Path
