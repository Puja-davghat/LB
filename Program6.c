/*
Step 1 : understand the program statement 
Step 2 : write the algorithm 
Step 3 : decide the programming language 
Step 4 : write the code
step 5 : test the Program

*/
//////////////////////////////////////////////////////////////////////////////////////////////
// Step 1 : understand the program statement 
//           user is going to ANY two integer And we have to perform addition 
//
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////
//step 2 : write the algorithm
//  
 /*  START
          Accept first no as no.1 
          accept second no as no.2
          create the variable  as ANS to store the result 
          perfoem the additionand store ANs 
          display the output 
    END 
// */
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////
//Step 3 : decide the programming language  
 //        we select C programing 
//
//////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
// Step 4 : write the code
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Addition(int ino1, int ino2)
{
int iAns=0;
iAns=ino1 + ino2;
return iAns; //buisness logic


}


int main()
{
int ivalue1=0,  ivalue2=0,  iResult=0;
printf("Enter the First number\n");
scanf("%d",&ivalue1);//& address oprator

printf("Enter the Second number\n");
scanf("%d",&ivalue2);//& address oprator

iResult = Addition(ivalue1, ivalue2);

printf("Addion is : %d\n",iResult);//output
    return 0;

}

