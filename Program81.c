// Input: 5
// Output: 1+2+3+4+5 =15

//input 8
//output 1+2+3+4+5+6+7+8=36


#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
int iCnt=0;
int iSum=0;
for(iCnt =1 ; iCnt<= iNo; iCnt++)
{
iSum= iCnt * iSum;
   

}
return iSum;
}


int main()
{
    
    int iValue = 0;
    int iRet= 0;

    printf("Enter the Frequency: ");
    scanf("%d", &iValue);

    iRet= Summation(iValue);
     printf("Summation Is  :  %d\n");
    return EXIT_SUCCESS;
}