#include<stdlib.h>
#include<stdio.h>
 
void CheckDivisible(int iNo)
  {
if ((iNo % 3) == 0) 
{  
    if((iNo % 5)  == 0)
    {
         printf("Number is Divisible by 3 & 5  \n");
    }
    else
     {
        printf("Number is Not  Divisible by  3 & 5 \n");
     }
}
else
{
    printf("Number is Not  Divisible by 3 & 5 \n");
}
    }

  int main()
  {
 int iValue = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

CheckDivisible(iValue);
return EXIT_SUCCESS;
  }