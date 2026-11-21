#include<stdio.h>
#include<stdlib.h>

float main()
{
float Arr[4]= {0};// no garbage value presnt caosue { 0 } remove garbage .
 int iCnt =0;

 printf("Enter the Elements of Array :\n");  // take input 
 for(iCnt =0; iCnt < 4 ; iCnt++)
 {
 scanf("%f",&Arr[iCnt]);

 }

 printf("Elements Of the Array are :\n"); // give output

 for(iCnt =0; iCnt < 4 ; iCnt++)
{
printf("%f\n",Arr[iCnt]);
}

    return EXIT_SUCCESS;
}