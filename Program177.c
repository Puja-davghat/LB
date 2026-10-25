/*
98889
765567
980089
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckPalindrom(int iNo)
{
 int iDigit = 0, iRev = 0 , iTemp=0;
 iTemp = iNo;
  while(iNo != 0)
  {

iDigit = iNo% 10;
iRev = (iRev * 10) + iDigit;
iNo= iNo/10;

 } 
 if(iRev == iTemp) // issue Solve
 {
  return true;
 } else 
 {
  return false;
 }   
}
 int main()
 {
    
int iValue =0;
bool bRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
bRet = CheckPalindrom(iValue);
   if(bRet == true)    // issue
{
  printf("It is Palindron is");
}
else{
  printf("It is Not Palindron is");
}
 
    return EXIT_SUCCESS;
 }