#include<stdlib.h>
#include<stdio.h>
int SumFactor (int iNo)
 {
  
  int iCnt = 0 ;
 int iSum = 0;

for ( iCnt=1; iCnt <= iNo/2; iCnt++)
{
  if(iNo % iCnt == 0){

    iSum = iSum + iCnt;
  }
}
  return iSum;


 }
  int main()
  {
 
 int iValue = 0 ;
int iRet = 0 ;

  printf("Enter number : \n");
  scanf("%d", &iValue);
  
iRet = SumFactor(iValue);
 printf("Summation of Factor : %d\n",iRet);
return EXIT_SUCCESS;
  }
  // time complexity :  O(N/2)