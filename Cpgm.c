#include<stdio.h>
void main(){            
  int num1,num2;
  printf(" \n Enter two numbers : ");
  scanf("%d%d",&num1,&num2);
  if(num1>num2){
    printf("\n %d is greater than %d",num1,num2);
  }
  if (num2>num1){
    printf("\n %d is greater than %d",num2,num1);
  }
}