// 5
// 1 2 3 4 5 
#include<stdio.h>
#include<stdlib.h>
void Pattern( int iNo)
  { 
    int  iCnt =0 ;
    for (iCnt=1; iCnt<=iNo ;iCnt++)
    {
      printf("%d\t", iCnt);
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