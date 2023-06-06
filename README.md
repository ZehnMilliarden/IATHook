# IATHook
usage: InjectProcess64.exe --proc=string --dll=string [options] ...
options:
  -p, --proc      Process Path (string)
  -d, --dll       Dynamic Link Library Path (string)
  -s, --silent    Hook Silent
  
example: 
```sh
E:\InjectProcess64.exe --dll=E:\IATHook64.dll --proc=C:\Windows\System32\notepad.exe
```