# QtTest bug 124166
Repository to reproduce issue: 
> Running a test executable on Windows does not output anything.

-- https://bugreports.qt.io/browse/QTBUG-124166

Affected Qt Versions: 6.7.0-RC2, 6.6.1

## Run locally
```
$ cmake -B build -G "Visual Studio 17 2022" -A "x64" -DCMAKE_PREFIX_PATH="C:\Qt\6.7.0\msvc2019_64 -DCMAKE_INSTALL_PREFIX=dist/
$ cmake --build build/ --config Release --parallel
$ cmake --install build/
# .\dist\bin\Tests.exe -v2
```