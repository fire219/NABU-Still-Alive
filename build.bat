@echo off

SET Z88DK_DIR=c:\z88dk\
SET ZCCCFG=%Z88DK_DIR%lib\config\
SET PATH=%Z88DK_DIR%bin;%PATH%

echo.
echo ****************************************************************************

zcc +cpm -vn --list -m -create-app -compiler=sdcc -O3 --opt-code-speed main.c -o "sa"

echo ****************************************************************************

mkfs.cpm -f naburn8mb "C:\Users\Matthew Petry\Documents\NABU Internet Adapter\Store\c.dsk"

cpmcp -f naburn8mb    "C:\Users\Matthew Petry\Documents\NABU Internet Adapter\Store\c.dsk" sa.com 0:

dir *.com

pause
