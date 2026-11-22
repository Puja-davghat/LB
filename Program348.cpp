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
  Number number2(7);
  Number number1(5);
 
    return EXIT_SUCCESS;
}