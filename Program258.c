#include<stdio.h>
#include<stdlib.h>

int CountCapitalX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if((*str >= ('A'))  &&  (*str <= ('Z'))  ) // capital A-Z asccii value
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

iRet = CountCapitalX(Arr);
printf("Frequency  of Capital etters is: %d\n",iRet);

    return EXIT_SUCCESS;
}


