#include <stdio.h>
void main()
{
  char ch ;
   printf ("\n Enter a Character : \n ");
   scanf("%c",&ch);
   if(ch == 'a' || ch == 'A' ||ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||ch == 'o' || ch == 'O'||ch == 'u' || ch == "U" ){
     printf(" %c is Vowel ",ch );
   }
   else{
     printf("\n  %c ic Consonant ",ch);
   }
}