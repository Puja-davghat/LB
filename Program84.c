#include<stdlib.h>
#include<stdio.h>
  void CheckDivisible(int iNo)
  {
if (iNo%5 == 0)
{
    printf("Number is Divisible by 5 \n", iNo);

}
else{
    printf("Number is Not  Divisible by 5 \n",iNo);
}
  }
int main()
  {
 int iValue = 0;
  printf("Enter number\n");
  scanf("%d", &iValue);

CheckDivisible(iValue);return EXIT_SUCCESS;
  }