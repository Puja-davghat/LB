#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

int strlenX(char *str)        // Api replication used to inbuild function call 
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

iRet = strlen(Arr);
printf("String Lenght is: %d\n",iRet);

    return EXIT_SUCCESS;
}
