// Input: 4
// Output: 4    3   2   1

#include <stdlib.h>
#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 1;

    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d", iCnt);

        if (iCnt < iValue)
        {
            printf("\t*\t");
        }
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