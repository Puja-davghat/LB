#include<stdio.h>
#include<stdlib.h>
int Maximum(int iValue1, int iValue2)
{
    if(iValue1>iValue2)
    { 
        return iValue1;
    }
    else
    {
        return iValue2;
    }
}
int main()
{
 int iValue1 = 0 , iValue2 = 0 , iResult = 0;

printf("Enter first number:\n");
scanf("%d", &iValue1);

printf("Enter second number:\n");
scanf("%d", &iValue2);

if(iValue1 >iValue2)
{
     printf("Maximum is : %d\n " , iValue1);

}else
{
    printf("Maximum is : %d\n " , iValue2);
}

    return EXIT_SUCCESS;
}
