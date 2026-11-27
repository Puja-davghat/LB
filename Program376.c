#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt =0 , iMax =0;

    for(iCnt=0 ;iCnt< iLength ; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    
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
    iRet = Maximum(ptr,iSize)

    printf("LArgest valu is :%d\n", iRet);
    scanf("%d",&iSize);
    
    free(ptr);

    return EXIT_SUCCESS;
}
