#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect (int iNo)
 {
  
  int iCnt = 0 ;
 int iSum = 0;

for ( iCnt=1; iCnt <= iNo/2; iCnt++)
{
  if(iSum==  iNo)
  {

   return true ;
  }
  else
  {
    return false;
  }

}return (iSum == iNo);
}
 
  int main()
  {
 
 int iValue = 0 ;

int bRet = 0;
  printf("Enter number : \n");
  scanf("%d", &iValue);
  
bRet= CheckPerfect(iValue);
if(bRet == true){
 printf("It is perfect number  : %d\n");
}
else{
  printf("It is not perfect number  : %d\n");
}
return EXIT_SUCCESS;
  }
  // time complexity :  O(N/2)