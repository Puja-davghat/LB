/*
-----------------------------------------------------
                operation ||
------------------------------------------------------
REsult1           Result2              Final result 
-------------------------------------------------------
TRUE              TRUE                   TRUE           // Short circuit
TRUE              FALSE                  TRUE           // Short circuit
FALSE             TRUE                   TRUE        
FALSE             FALSE                  FALSE        
-----------------------------------------------------
*/

#include<stdlib.h>
#include<stdio.h>
 
void CheckDivisible(int iNo)
  {
if (((iNo % 3) == 0) || ((iNo % 5)  == 0))
{
    printf("Number is either Divisible by 3 & 5  \n");

}
else
{
    printf("Number is Not  either Divisible by 3 & 5 \n");
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