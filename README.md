# tik-tak
Problem set 1

Program na začiatku načíta číslo n, pre ktoré platí: 0 < n < 10000. Váš program následne vypíše na každý riadok samostatne čísla v poradí od 1 po n, pričom dodrží pravidlá uvedené vyššie:

-Ak je číslo deliteľné číslom 3, vypíše miesto neho na obrazovku tik.
-Ak je číslo deliteľné číslom 5, vypíše miesto neho na obrazovku tak.
-Ak je číslo deliteľné číslami 3 a 5 súčasne, vypíše miesto nich na obrazovku tiktak.
V prípade, ak bol zadaný nesprávny vstup (zadané číslo n nie je z rozsahu 0 < n < 10000), program vypíše na obrazovku hodnotu -1.

EXAMPE:
$ ./tiktak
10
1
2
tik
4
tak
tik
7
8
tik
tak

EXAMPLE:
$ ./tiktak
12345
-1

--= tiktak.c =--
