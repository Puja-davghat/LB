#include<iostream>
 using namespace std;

 
int Summation(int Arr[],int iLength) 
{
    int iCnt=0, iSum =0;
    for ( iCnt =0; iCnt < iLength; iCnt++)
  {
      iSum = iSum +Arr[iCnt];
  }
   return iSum;
}

float Average(int Arr[],int iLength) 
{
    int iCnt=0, iSum =0;
    for ( iCnt =0; iCnt < iLength; iCnt++)
  {
      iSum = iSum +Arr[iCnt];
  }
   return ((float)iSum / (float)iLength);
}


 int main ()
 {
 int *ptr = NULL;
 int iSize = 0,  iCnt =0;
 int iRet =0;
 float fRet= 0.0f;

 cout<<"Enter the Number of Elements :\n";
 cin>>iSize; 

 //Step Allocate memory 
 ptr = new int [iSize];


 //Step 2: use the Memory
cout<<"Enter The Elements : \n";
 for( iCnt=0; iCnt < iSize ; iCnt++)
 {
    cin>>ptr[iCnt];
 }

 cout<<"Elements of array are :\n";

 for( iCnt=0; iCnt < iSize ; iCnt++)
 {
    cout<<ptr[iCnt]<<endl;
 }


iRet = Summation ( ptr,iSize);
cout<<"Addition is :"<<iRet<<endl;


fRet = Average(ptr,iSize);
cout<<"Average is :"<<fRet<<endl;

 // Step 3: free memory
 delete ptr;   //free(ptr);


    return EXIT_SUCCESS;
 }