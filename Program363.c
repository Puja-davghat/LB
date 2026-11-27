#include<stdio.h>
#include<stdlib.h>
int OddCount(int Arr[], int iLength)
{
    int iCnt =0 , iConut = 0;
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
     if(Arr[iCnt] % 2 == 0)
     {
        return iConut++;
     }
    
    }
    return iConut;
}
int main()
{
    int *ptr = NULL;
    int  iSize =0,iCnt =0;
    int iRet =0;
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

    //function Call
    iRet = OddCount(ptr,iSize);
    printf("Number of Odd Eements Are :%d\n",iRet);

    free(ptr);

    return EXIT_SUCCESS;
}
