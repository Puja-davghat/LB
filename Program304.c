#include<stdio.h>
#include<stdlib.h>

int main()
{
int Arr[4]= {0};// no garbage value presnt caosue { 0 } remove garbage .
 int iCnt =0;

 printf("Enter the Elements of Array :\n");
 for(iCnt =0; iCnt < 4 ; iCnt++)
 {
 scanf("%d",&Arr[iCnt]);

 }

 printf("Elements Of the Array are :\n");

 for(iCnt =0; iCnt < 4 ; iCnt++)
{
printf("%d\n",Arr[iCnt]);
}

    return EXIT_SUCCESS;
}