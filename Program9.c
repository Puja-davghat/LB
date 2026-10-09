
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

///////////////////////////////////////////////////////////////////////////
//
// Entry Point Of The Applictaion
//
///////////////////////////////////////////////////////////////////////////

int main()
{
int ivalue1=0,  ivalue2=0,  iResult=0;
printf("Enter the First number\n");
scanf("%d",&ivalue1);//& address oprator

printf("Enter the Second number\n");
scanf("%d",&ivalue2);//& address oprator

iResult = Addition(ivalue1, ivalue2);

printf("Addion is : %d\n",iResult);//output
    return EXIT_SUCCESS;

}

///////////////////////////////////////////////////////////////////////////
//step 5 : test the Program
//         Tested Test Cases
// ------------------------------------------------------------
//         Input1   Input2   Output
//          10        11        21
//          11         0        11
//          0         11        11
//          20        -9        11
//          -9        20        11
//          -11       -20      -31
///////////////////////////////////////////////////////////////////////////