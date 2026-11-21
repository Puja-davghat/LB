#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength) //this fix logic 
{
    int iCnt=0;
  
    for ( iCnt =0; iCnt < iLength; iCnt++)
  {
   printf("%d\n",Arr[iCnt]);
  }
}



int main()
{

int Brr[5] = {11,21,51,101,121};

Display(Brr,5); // Dispaly(100,7);

    return EXIT_SUCCESS;
}

