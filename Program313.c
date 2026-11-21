#include<stdio.h>
#include<stdlib.h>
void Display(int ptr[]) // array is treted as pointer vise versa
{
    printf("%d\n",*ptr);

    ptr++;
    printf("%d\n",*ptr);

    ptr++;
    printf("%d\n",*ptr);

    ptr++;
    printf("%d\n",*ptr);

}

int main()
{

int Arr[5] = {11,21,51,101,151};

Display(Arr); // Dispaly(100);

    return EXIT_SUCCESS;
}

// Arr[2] => *(Arr+2)