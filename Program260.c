
// @ % & # *  &
#include<stdio.h>
#include<stdlib.h>

int CountSpecialX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if((*str == ('$'))  ||  (*str == ('#'))   ||  (*str == ('*')) ||  (*str == ('%'))   ||  (*str == ('&')))
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

iRet = CountSpecialX(Arr);
printf("Frequency  Special ltters is: %d\n",iRet);
    return EXIT_SUCCESS;
}


