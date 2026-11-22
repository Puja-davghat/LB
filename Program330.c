#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iLength) 
{
    int iCnt=0, iSum =0;
    for ( iCnt =0; iCnt < iLength; iCnt++)
  {
      iSum = iSum +Arr[iCnt];
  }
   return iSum;
}

float Average(int Arr[],int iLength) 
{
    int iCnt=0, iSum =0;
    for ( iCnt =0; iCnt < iLength; iCnt++)
  {
      iSum = iSum +Arr[iCnt];
  }
   return ((float)iSum / (float)iLength);
}


int main()
{
  int *ptr = NULL;
  int iSize = 0, iCnt =0 ;
int iRet = 0;
float fRet = 0.0f;

printf("Enter Number of Elements you want : \n");
scanf("%d",&iSize);


  ptr = (int *)malloc(sizeof(int) * iSize);

 
printf("Enter The Elements : \n");
for(iCnt=0 ; iCnt < iSize ; iCnt++)
{
  scanf("%d",&ptr[iCnt]);

}

fRet = Average(ptr,iSize);
iRet = Summation(ptr,iSize);

printf("Addition of All Elelments : %d\n", iRet);
printf("Average of All Elelments : %f\n", fRet);
  
  free(ptr);


    return EXIT_SUCCESS;
}

