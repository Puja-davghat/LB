#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];
    printf("Enter String : \n");
    //scanf("%[^'\n']s",Arr);   tow way to display strin this is 1 
    
    fgets(Arr,sizeof(Arr),stdin);
    printf("Entered String is : %s\n",Arr);// f means Files  this is 2 
                                        

    
    return EXIT_SUCCESS;
}
