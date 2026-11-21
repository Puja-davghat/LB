#include<stdio.h>
#include<stdlib.h>

void Display()
{

}

int main()
{
int Arr[5] = {10,20,30,40,50};
printf("%d\n",Arr); //base add

printf("%d\n",&Arr);//base addreass of whole array 

printf("%d\n",&Arr[0]); // base adress of 0 index
    return EXIT_SUCCESS;
}