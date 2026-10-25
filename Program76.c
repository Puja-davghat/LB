// Input: 10
// Output: 1 3 5 7 9

#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < 10; iCnt += 2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter the Frequency: ");
    scanf("%d", &iValue);

    Display();

    return EXIT_SUCCESS;
}