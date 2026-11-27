#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int  iSize =0,iCnt =0;
    printf("Enter the Number Of Element : \n");
    scanf("%d",&iSize);


    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr = NULL)// ISSUE
    // in = so it asign  the loop enter and == is comparisoion oprator so it check but single = is assgin null evy enter 
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

    free(ptr);

    return EXIT_SUCCESS;
}
