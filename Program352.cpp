#include<iostream>
using namespace std;

class Number 
{
public : 
int *Arr ;  // 8byte
int iLength; // 4byte

Number(int iSize)  //default constractor
{
  cout<<"Inside Contructor\n";
this->iLength = iSize;
this->Arr = new int [iLength];

}

~Number()// desctructor;
{
  cout<<"Inside destructor\n";
    delete[] this->Arr;
  
}

void Accept()  // accept method
{
int iCnt =0;
  cout<<"Enter the Elements :\n";
  for(iCnt =0; iCnt <iLength ; iCnt++)
  {
    cin>>Arr[iCnt];
  }
}
void Display()
{
  int iCnt =0;
  cout<<"Elements the array of:\n";
  for(iCnt =0; iCnt <iLength ; iCnt++)
  {
   cout<<Arr[iCnt]<<endl;
  }

}
};

int main()
{
int iSize =0;
cout<<"Enter the Number Of Elements :\n";
cin>>iSize;
  //Step 1: Allocate memory 
 Number *number1 = new Number(iSize);



 //Step2 : Use the Memory 
number1->Accept();
number1->Display();




 //step 3: deallocate the memory (free)
 delete number1;



    return EXIT_SUCCESS;
}