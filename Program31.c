#include<stdio.h>
#include<stdlib.h>
int main()
{

char sName [30]; // satic memory allocation
int iAge =0;
float fMarks = 0.0f;

printf("ENter Your Name \n");
scanf("% [^'\n'] s", sName); // Enter Remains in input buffer

printf("Enter Your Age \n");
scanf(" %d", iAge);

printf("Enter Youe Marks\n");
scanf(" %f", &fMarks);

printf("welcome...!, %s!\n", sName);
 
printf("Your Age is :%d \n", iAge);
printf("Your Marks are : %f \n",  fMarks);


    return EXIT_SUCCESS;

}