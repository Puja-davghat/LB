
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;//nutral vlaue or default value

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
if(bRet == true)
{
printf("It Is Even Number\n");
}
else
{
printf("It Is Odd Number\n");
}
    return EXIT_SUCCESS;
}
