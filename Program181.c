/* * * *  *  */
#include<stdio.h>
#include<stdlib.h>
void Pattern( int iNo)
  { 
    int  iCnt =0 ;
    for (iCnt=1; iCnt<=iNo ;iCnt++)
    {
      printf("*\t");
    }
 printf("\n");

  }

int main()
{
  int ivlaue = 0;
  printf("Enter The Frequency : ");
  scanf("%d",&ivlaue);
 Pattern(ivlaue);   
 return EXIT_SUCCESS;
}