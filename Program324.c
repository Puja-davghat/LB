#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr = NULL;
  int iSize = 0, iCnt =0 ;


printf("Enter Number of Elements you want : \n");
scanf("%d",&iSize);

//step 1 : Allocate the memory
  ptr = (int *)malloc(sizeof(int) * iSize);

  // step 2 : Use the Memory
printf("Enter The Elements : \n");
for(iCnt=0 ; iCnt < iSize ; iCnt++)
{
  scanf("%d",&ptr[iCnt]);
}

  // Step 3 :  Free the Memory
  free(ptr);


    return EXIT_SUCCESS;
}

