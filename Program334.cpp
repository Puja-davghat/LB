#include<iostream>
 using namespace std;

 int main ()
 {
 int *ptr = NULL;
 int iSize = 0;

 cout<<"Enter the Number of Elements :\n";
 cin>>iSize; 

 //Step Allocate memory 
 ptr = new int [iSize];


 //Step 2: use the Memory


 // Step 3: free memory
 delete [] ptr;   //free(ptr);

    return EXIT_SUCCESS;
 }