#include<stdio.h>
#include<stdlib.h>
int main()
{

char sName [30]; // satic memory allocation
int iAge =0;
float fMarks = 0.0f;

printf("Enter Your Name \n");
scanf("% [^'\n'] S", sName); // Enter Remains in input buffer

fflush(stdin); // flush the input buffer

printf("Enter Your Age \n");
scanf("%d", iAge); // space added

printf("Enter Youe Marks\n");
scanf( "%f", &fMarks);

 printf("Welcome...!, %s!\n", sName);
 
printf("Your Age is :%d \n", iAge);
printf("Your Marks are : %f \n",  fMarks);

    return EXIT_SUCCESS;

}