#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr = NULL;
  int iSize = 0;


   

 
printf("Enter Number of Elements you want : \n");
scanf("%d",&iSize);

//step 1 : Allocate the memory
  ptr = (int *)malloc(sizeof(int) * iSize);

  // step 2 : Use the Memory



  // Step 3 :  Free the Memory
  free(ptr);


    return EXIT_SUCCESS;
}

