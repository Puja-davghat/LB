#include<stdio.h>
#include<stdlib.h>
void Display(char *str) // two way ti initilization  char str[] && char *str
{
   printf("%s\n",str);
}

int main()
{
char Arr[100];
 
printf("Enter the string : \n");
scanf("%[^'\n']s", Arr);

Display(Arr);
    return EXIT_SUCCESS;
}
