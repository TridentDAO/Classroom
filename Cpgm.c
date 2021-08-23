#include<stdio.h>
void main(){            
   int num;
  printf("\n Enter a number : \t ");
  scanf("%d",&num);
  if(num % 2 == 0 ){
    printf("\n  %d is Even number .",num );
  }
  else{
    printf("\n \t %d is Odd number .",num);
  }
}