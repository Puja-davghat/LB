#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)
{
printf("%d\n",ptr);
}

int main()
{
int Arr[5] = {10,20,30,40,50};

Display(Arr); // Dispaly(100);
    return EXIT_SUCCESS;
}