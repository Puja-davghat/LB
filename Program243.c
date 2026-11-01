#include<stdio.h>
#include<stdlib.h>

int strlenX(char *str)
{
   int iCount = 0;
   while (*str != '\0')
   {
      iCount++;
      str++;

   }
   return iCount++;
}

int main()
{

   int iRet = 0;

char Arr[100]= {'\0'};  // Static memory
 printf("Enter String : \n");
 scanf("%[^'\n']s", Arr);

iRet = strlenX(Arr);
printf("String Lenght is: %d\n",iRet);

    return EXIT_SUCCESS;
}
