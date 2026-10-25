//input  48967  -> 
     /*
     odd : 7 
     even : 6
     odd : 9
     even : 8
     even :4
     */

#include<stdio.h>
#include<stdlib.h>
int CountDigits(int iNo)
{
int iDigit = 0;
int iCount = 0;

if(iNo < 0)
{
    iNo = -iNo;
}

while (iNo  != 0)
{
    iDigit = iNo % 10;
    
    iNo = iNo/ 10; 
    iCount++ ;
}
  return iCount;

}

 int main()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

   iRet = CountDigits(iValue);

printf("Count of digit : %d\n", iRet);

    return EXIT_SUCCESS;
 }