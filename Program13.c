
#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////
//  function name   :  Addition
//  Input           :  Integer, Integer
//  Output          :  Integer
//  Description     :  Perform Addition
//  Date            :  04/10/2026
//  Auther          :  Puja Anil Davghat
//
///////////////////////////////////////////////////////////////////////////
int Addition(
                int ino1,   //first input
                int ino2   //second input
            )
{
    int iAns=0;

    iAns=ino1 + ino2;      //buisness logic

    return iAns; 

}

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
