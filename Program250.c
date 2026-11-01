// actpt str usr count char a 
// input   Puja
// output   vovels count 
// a  e i o u insesitive

#include<stdio.h>
#include<stdlib.h>

int CountVowelsX(char *str)
{
   char ch = 'a';
   int iCount = 0;
   while (*str != '\0')
   {
     if((*str == ('A')) || (*str ==('E')) || (*str == ('I')) || (*str == ('O')) || (*str == ('U')) ||
         (*str == ('a')) || (*str ==('e')) || (*str == ('i')) || (*str == ('o')) || (*str == ('u'))
   )
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

iRet = CountVowelsX(Arr);
printf("Frequency of 'Vowels' is: %d\n",iRet);

    return EXIT_SUCCESS;
}

