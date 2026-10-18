/*
-----------------------------------------------------
                operation &&
------------------------------------------------------
REsult1           Result2              Final result 
-------------------------------------------------------
TRUE              TRUE                   TRUE
TRUE              FALSE                  FALSE
FALSE             TRUE                   FALSE         // Short circuit
FALSE             FALSE                  FALSE        // Short circuit
-----------------------------------------------------
*/

#include<stdlib.h>
#include<stdio.h>
 
void CheckDivisible(int iNo)
  {
if (((iNo % 3) == 0) && ((iNo % 5)  == 0)) // 2end condition not satisfy when in
{
    printf("Number is Divisible by 3 & 5  \n");

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