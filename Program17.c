#include<stdio.h>
#include<stdlib.h>

int main()
{
 int iValue=0;

printf("Enter Number : \n");
scanf("%d",&iValue);

if ((iValue % 2) == 0)
{
printf("It Is Even Number \n");

}
else
{
printf("It Is Odd Number \n");

}
 
 return EXIT_SUCCESS;


}