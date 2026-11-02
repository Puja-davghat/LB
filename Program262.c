#include<stdio.h>
#include<stdlib.h>

// FIX 1: Added * to make 'str' a pointer so it can traverse the array
void CountFrequencyX(char *str)
{
   int iCountSmall = 0 , iCountCapitlas = 0, iCountDigits = 0;

   while (*str != '\0')
   {
      if(*str >= 'A'  && *str <= 'Z' ) 
      {
         iCountCapitlas++;
      }
      else if(*str  >= 'a' && *str <= 'z' )
      {
         iCountSmall++;    
      }
      else if(*str  >= '0' && *str <= '9' )
      { 
         iCountDigits++;
      }
   
      str++;
   }
   printf("Freqency of capitls Letters is : %d\n", iCountCapitlas);
   printf("Freqency of Samll Letters  is : %d\n", iCountSmall);
   printf("Freqency of Digit  is : %d\n", iCountDigits);
}

int main()
{
   char Arr[100]= {'\0'};  
   printf("Enter String : \n");
   
   // FIX 3: Removed single quotes and trailing 's'
   scanf("%[^\n]", Arr); 

   // FIX 2: Changed to CountFrequencyX to match the definition above
   CountFrequencyX(Arr); 

   return EXIT_SUCCESS;
}
