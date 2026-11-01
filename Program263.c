
// @ % & # *  &
#include<stdio.h>
#include<stdlib.h>
void CountFrequencyX(char str)
{
   int iCountSmall = 0 , iCountCapitlas = 0, iCountDigits = 0 , iCountSpecial= 0;

   while (*str != '\0')
   {
      if(*str >= 'A'  &&*str <= 'Z' ) 
      {
         iCountCapitlas++;
        
      }else if(*str  >= 'a' && *str <= 'z' )
      {
         iCountSmall++;    
      }else if(*str  >= '0' && *str <= '9' )
      { 
         iCountDigits++;
      }
      else
      {
            iCountSpecial++;
      }
   
      str++;
   }
   printf("Freqency of capitls Letters is : %d\n", iCountCapitlas);
   printf("Freqency of Samll Letters  is : %d\n", iCountSmall);
   printf("Freqency of Digit  is : %d\n", iCountDigits);
   printf("Freqency of Special Symbol  is : %d\n", iCountSpecial);

}
int main()
{


char Arr[100]= {'\0'};  // Static memory
 printf("Enter String : \n");
 scanf("%[^'\n']s", Arr);

 CountFrequency(Arr);

    return EXIT_SUCCESS;
}


