/*printf_znaki_specjalne.c*/
/*Program ilustruje działanie znaków specjalnych:
\t - tabulator,
\' - apostrof,
\a - sygnał dźwiękowy,
\" - cudzysłów,
\b - backspace,
\\ - ukośnik wsteczny.*/
#include <stdio.h>

main(){
   printf("Kolumna A\tKolumna B\tKolumna C\n");
   printf("To jest apostrof: \'\n");
   printf("Alarm!!\a\n");
   printf("Cudzyslow podwojny \"\n");
   printf("Samolot\b\b\bwar\n");
   printf("Backslash: \\\n");
   return 0;
}






















