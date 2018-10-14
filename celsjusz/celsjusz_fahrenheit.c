/*celsjusz_fahrenheit.c*/
/*przeliczanie temperatury
  ze stopni Celsjusza
  na stopnie Fahrenheita*/
main(){
   float celsjusz, fahrenheit;
   celsjusz = 36.6;
   fahrenheit = 32 + 1.8*celsjusz;
   printf("Temperatura %.2f stopni Celsjusza\n",celsjusz);
   printf("odpowiada temperaturze %.2f stopni Fahrenheita.", fahrenheit);
   return 0;
}
