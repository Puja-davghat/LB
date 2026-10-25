//input  6427  -> 22     5.5

     /* 734    14          4.5
     
     */

#include<stdio.h>
#include<stdlib.h>
float AverageDigits(int iNo)
{
int iSum = 0;
int iDigit = 0;
float Avg = 0;
int iCount = 0;
if(iNo< 0)
{
    iNo = - iNo;
}
while (iNo!= 0 )
{
      iDigit = iNo % 10;
       iCount++;
    iSum = iSum + iDigit;
   
    iNo = iNo/ 10; 

}

return Avg = iSum / iCount;

}

 int main()
 {
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

   fRet = AverageDigits(iValue);

printf("Average  of digit : %f\n", fRet);

    return EXIT_SUCCESS;
 }