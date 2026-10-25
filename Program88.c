#include<stdlib.h>
#include<stdio.h>
 
  int main()
  {
 int iCnt= 0;
 int iValue = 0 ;


  printf("Enter number : \n");
  scanf("%d", &iValue);
  for ( iCnt=1; iCnt<= iValue; iCnt++)
  {
    printf("%d \n", iCnt);
  }


return EXIT_SUCCESS;
  }