// Input: 4
// Output: 4    3    2    1

#include <stdlib.h>
#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for (iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter Frequency: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}