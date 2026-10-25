#include <stdio.h>
#include <stdlib.h>
 int main()
 {

    int n = 0;
    printf("Enter Number : \n");
    if(scanf("%d",&n) != 1 )
    {

      fprintf(stderr, "Invalid Input\n");
      return EXIT_FAILURE;
    }
     
   
    printf("Input is valid\n");
    return EXIT_SUCCESS;
 }


