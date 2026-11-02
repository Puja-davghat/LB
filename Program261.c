#include<stdio.h>
#include<stdlib.h>

// 1. Changed 'char str' to 'char *str' so it accepts the array pointer
void CountFrequencyX(char *str) 
{
   int iCountSmall = 0, iCountCapitals = 0, iCountDigits = 0;

   while (*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         iCountCapitals++;
      }
      else if((*str >= 'a') && (*str <= 'z'))
      {
         iCountSmall++;    
      }
      // 4. Added specific condition so symbols like @ or % aren't counted as digits
      else if((*str >= '0') && (*str <= '9')) 
      { 
         iCountDigits++;
      }
      str++;
   }
   printf("Frequency of Capital Letters is : %d\n", iCountCapitals);
   printf("Frequency of Small Letters is : %d\n", iCountSmall);
   printf("Frequency of Digits is : %d\n", iCountDigits);
}

int main()
{
   char Arr[100] = {'\0'}; 
   
   printf("Enter String : \n");
   // 3. Fixed the scanf format specifier
   scanf("%[^\n]", Arr); 

   // 2. Fixed the function name to match 'CountFrequencyX'
   CountFrequencyX(Arr); 

   return EXIT_SUCCESS;
}
