#include<iostream>
using namespace std;

class Number 
{
private : 
int *Arr ;  // 8byte
int iLength; // 4byte

public : 
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

int Summation()
{
  int iCnt=0, iSum =0;
  
      for(iCnt=0; iCnt<=iLength ;iCnt++)
      {
      iSum = iSum +Arr[iCnt];
      }
      return iSum;
}

float Average()
{
  int iCnt=0, iSum =0;

  cout<<"Average is :\n";
      for(iCnt=0; iCnt<=iLength ;iCnt++)
      {
      iSum = iSum +Arr[iCnt];
      }
      return float(iSum)/ float(iLength);
}
};

int main()
{
Number nobj1(5);
Number nobj2(7);

nobj1.Accept();
cout<<"Addition is :" <<nobj1.Summation()<<endl;

nobj2.Accept();
cout<<"Addition is :" <<nobj2.Summation()<<endl;

    return EXIT_SUCCESS;
}