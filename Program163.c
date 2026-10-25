//input  8967  -> 6   8
         //4268 -> 8 6 2 4 
         //5799   ->  ------

#include<stdio.h>
#include<stdlib.h>
void DisplayEvenDigits(int iNo)
{
int iDigit = 0;
if(iNo < 0)
{
    iNo = -iNo;
}

while (iNo  != 0)
{
    iDigit = iNo % 10;

    if(iNo % 2 == 0)
    {
     printf("%d\n", iDigit);//logic
    }
   
    iNo = iNo/ 10;

    
}


}

 int main()
 {
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return EXIT_SUCCESS;
 }