// typedef


#include<stdlib.h>
#include<stdio.h>

typedef unsigned long long  ULONG;

ULONG  Factorial(int iNo)
 {
  int iCnt = 0; 
 ULONG  iFact= 0;
   iFact = 1;

for ( iCnt=1 , iFact = 1; iCnt<= iNo; iCnt++)
  {
  iFact = iFact * iCnt;
  }
  return iFact;
 }
  int main()
  {
 
 int iValue = 0 ;
 ULONG lRet = 0;


  printf("Enter number : \n");
  scanf("%lld", &iValue);
  
lRet = Factorial(iValue);
printf("Factorial is : %lld\n", lRet);

return EXIT_SUCCESS;
  }