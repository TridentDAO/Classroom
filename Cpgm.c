
#include <stdio.h>
void main()
{
   int salary;
   printf("Enter the salary: ");
   scanf("%d", &salary);
   if (salary >= 100)
    {
      if(salary > 100)
      {
        salary = 4 * salary + 100;
        printf("\n  salary is %d", salary); 
      }
      else{
        salary = 300;
        printf("\n  salary is %d", salary);
      }
    }
    else
    {
      salary = 4.5 * salary + 150;
      printf("\n  salary is %d", salary);
    }
}