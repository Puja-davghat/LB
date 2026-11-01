#include<stdio.h>
#include<stdlib.h>

int CountDigitsX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if((*str >= ('0'))  &&  (*str <= ('9'))  )
     {
      iCount++;
     }
     str++;
   }
   return iCount;
}
int main()
{

   int iRet = 0;

char Arr[100]= {'\0'};  // Static memory
 printf("Enter String : \n");
 scanf("%[^'\n']s", Arr);

iRet = CountDigitsX(Arr);
printf("Frequency  of Digits is: %d\n",iRet);

    return EXIT_SUCCESS;
}


