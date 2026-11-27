#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchElements(int Arr[], int iLength, int iNo)
{
     
    int iCnt =0, iConut = 0;
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
     if(Arr[iCnt] == iNo)
     {
        return true;
        iConut++;
     }
     
    
    }

    return iConut;  
}
int main()
{
    int *ptr = NULL;
    int  iSize =0,iCnt =0;
    int iRet =0, iValue =0;

    printf("Enter the Number Of Element : \n");
    scanf("%d",&iSize);


    ptr = (int *)malloc(iSize * sizeof(int));
    if( NULL == ptr)// ISSUE resolved
    {
        printf("Error : unable to allocate memory\n");
        return EXIT_FAILURE; 
    }

    printf("Enetr the Elements :\n");
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }

    printf("Enter the Number that you want to search: \n");
    scanf("%d",&iValue);

    //function Call
    iRet = CountFrequency(ptr,iSize,iValue);
  
   if(iRet == true )
   {
     printf("Frequency is :%d\n", iRet);
   }


    free(ptr);

    return EXIT_SUCCESS;
}
