Prereqs:
* .NET SDK 5.0.100-rtm.20515.8
* https://aka.ms/dotnet/net5/5.0.1xx/daily/Sdk/dotnet-sdk-win-x64.exe
* https://aka.ms/dotnet/net5/5.0.1xx/daily/Sdk/dotnet-sdk-win-x86.exe

Uses nuget.config workaround here:
* https://github.com/dotnet/installer/issues/8882

Build with VS 16.8 p4

Repro:
* Set package project as startup project
* F5 debug the app
* Ctrl+Alt+F2 for Diagnostic Tools
* Click the leak button a few times
* Watch the process memory ramp up
