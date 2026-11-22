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
};



int main()
{

  //Step 1: Allocate memory 
 Number *number1 = new Number(5);
 Number *number2 = new Number(7);


 //Step2 : Use the Memory 

 delete number1;
 delete number2;




 //step 3: deallocate the memory (free)


    return EXIT_SUCCESS;
}