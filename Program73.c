//Input 4
// 1   *    2  *    3  *  4
#include<stdlib.h>
#include<stdio.h>

void Display(iValue)
{
    int iCnt=1;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("%d\t*\t", iCnt);
    }
    printf("\n");
}
int main()
{

int iValue= 0;

printf("Enter Frequency ....");
scanf("%d", &iValue);

    return EXIT_SUCCESS;
}