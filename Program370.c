#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchElements(int Arr[], int iLength, int iNo)
{
     
    int iCnt =0;
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
     if(Arr[iCnt] == iNo)
     {
     return true; // bad programing practice 
     }
    }
        return false;

    }

int main()
{
    int *ptr = NULL;
    int  iSize =0,iCnt =0;
    int  iValue =0;
  bool bRet = false;
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
    bRet = SearchElements(ptr,iSize,iValue);
        if(bRet == true)
        {
            printf("Elements is Present. \n");
        }
        else
        {
            printf("There is No Such Elements .\n");
        }

    free(ptr);

    return EXIT_SUCCESS;
}
