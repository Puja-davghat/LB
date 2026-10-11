#include<stdio.h>
#include<stdlib.h>
int main()
{

char sName [30]; // satic memory allocation
printf("ENter Your Name \n");
scanf("% [^'\n'] s", sName); // special scanf
printf("welcome...!, %s!\n", sName);

    return EXIT_SUCESS;

}