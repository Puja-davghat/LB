#include<iostream>
 using namespace std;

 int main ()
 {
 int *ptr = NULL;
 int iSize = 0,  iCnt =0;

 cout<<"Enter the Number of Elements :\n";
 cin>>iSize; 

 //Step Allocate memory 
 ptr = new int [iSize];


 //Step 2: use the Memory
cout<<"Enter The Elements : \n";
 for( iCnt=0; iCnt<5 ; iCnt++)
 {
    cin>>ptr[iCnt];
 }

 cout<<"Elements of array are :\n";

 for( iCnt=0; iCnt<5 ; iCnt++)
 {
    cout<<ptr[iCnt]<<endl;
 }


 // Step 3: free memory
 delete ptr;   //free(ptr);

    return EXIT_SUCCESS;
 }