#include<stdio.h>
#include<stdlib.h>
void EvenOddCount(int Arr[], int iLength)
{
    int iCountOdd =0 , iConutEven = 0;
    int iCnt =0;
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
     if(Arr[iCnt] % 2 == 0)
     {
       iConutEven++;
     }
     else
     {
        iCountOdd++ ;
     }
    
    }
printf("Number of Even : %d, odd element :%d\n",iConutEven,iCountOdd);
}
int main()
{
    int *ptr = NULL;
    int  iSize =0,iCnt =0;

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
    EvenOddCount(ptr,iSize);
   
    free(ptr);

    return EXIT_SUCCESS;
}
