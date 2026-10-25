// Input: 5
// Output: 1+2+3+4+5 =15

//input 8
//output 1+2+3+4+5+6+7+8=36

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int iCnt=0;
    int iSum= 0;
     iCnt=1;


     // iSum=0+1  ->1
    iSum= iCnt+ iSum;
    iCnt++; //1

// iSum=1+2  ->3
    iSum= iCnt+ iSum;
    iCnt++;//2

// iSum=3+3  ->6
    iSum= iCnt+ iSum;
    iCnt++;//3

// iSum=6+4  ->10
    iSum= iCnt+ iSum;
    iCnt++;//4

// iSum= 10+5  ->15
    iSum= iCnt+ iSum;
    iCnt++;//5


printf(" %d\n", iSum);
    return EXIT_SUCCESS;
}