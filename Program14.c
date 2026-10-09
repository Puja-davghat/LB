
#include "Header.h"
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////
//
// Entry Point Of The Applictaion
//
///////////////////////////////////////////////////////////////////////////
int main()
{

int ivalue1=0,  ivalue2=0,  iResult=0;
printf("Enter the First number\n");
if(scanf("%d",&ivalue1)!= 1 )
{
    fprintf(stderr, "Unable to Procced as Input is Invalid\n");
    return EXIT_FAILURE;
}

printf("Enter the Second number\n");
if(scanf("%d",&ivalue2)!= 1 )
{
    fprintf(stderr, "Unable to Procced as Input is Invalid\n");
    return EXIT_FAILURE;
}
iResult = Addition(ivalue1, ivalue2);

printf("Addion is : %d\n",iResult);//output
    return EXIT_SUCCESS;

}
