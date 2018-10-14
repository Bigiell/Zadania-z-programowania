/*define_example.c*/
/*Wstęp do programowania*/
/*Przykładowy program ilustrujący
  wykorzystanie dyrektyw preprocesora
  define oraz include.*/

#include <stdio.h>
#include "constants.h"

main(){
   char format[] = "%s\t%g\t%s\n";
   printf("Tabela stalych matematycznych\n");
   printf("Nazwa\tWartosc\tOpis\n");
   printf(format, PI_NAZWA, PI, PI_OPIS);
   printf(format, E_NAZWA,  E,  E_OPIS);
   printf(format, FI_NAZWA, FI, FI_OPIS);
}
