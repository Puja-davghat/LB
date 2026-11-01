#include<stdio.h>
#include<stdlib.h>

int CountSmallX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if((*str >= (97))  &&  (*str <= (122))  ) // small a-z asccii value
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

iRet = CountSmallX(Arr);
printf("Frequency  of small letters is: %d\n",iRet);

    return EXIT_SUCCESS;
}

