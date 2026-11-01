// actpt str usr count space
// input   Puja
// output   space  count 


#include<stdio.h>
#include<stdlib.h>

int CountSpaceX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if(*str == ' ')
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

iRet = CountSpaceX(Arr);
printf("Frequency of whitespaces is: %d\n",iRet);

    return EXIT_SUCCESS;
}

