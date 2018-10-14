/*scanf_example.c*/
/*na podstawie: G. Perry, D. Miller,
Język C Programowanie dla początkujących, Helion, 2014*/

main(){
   char firstInitial;
   char lastInitial;
   int age;
   int favouriteNumber;

   printf("Jaka jest pierwsza litera Twojego imienia?\n");
   scanf(" %c",&firstInitial);

   printf("Jaka jest pierwsza litera Twojego nazwiska?\n");
   scanf(" %c",&lastInitial);

   printf("Ile masz lat?\n");
   scanf(" %d",&age);

   printf("Jaka jest Twoja ulubiona liczba (tylko liczby calkowite)?\n");
   scanf(" %d",&favouriteNumber);

   printf("\nTwoje inicjaly to %c.%c. i masz %d lat.",
          firstInitial, lastInitial, age);
   printf("\nTwoja ulubiona liczba to %d.\n\n",
          favouriteNumber);

   return 0;
}



