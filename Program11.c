
 #include <stdio.h>
#include <stdlib.h>
 int main()
 {

    int n = 0;
    printf("Enter Number : \n");
    if(scanf("%d",&n) != 1 )
    {

      printf("Invalid Input\n");
      return EXIT_FAILURE;
    }
     
   
    printf("valid Input");
    return EXIT_SUCCESS;
 }