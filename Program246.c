// actpt str usr count char a 
// input   Puja
// output  1

#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if(*str == 'A')
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

iRet = CountX(Arr);
printf("Frequency of 'a' is: %d\n",iRet);

    return EXIT_SUCCESS;
}

