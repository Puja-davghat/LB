#include<iostream>// generic code 
using namespace std ;

template <class T>

class Arithmetic
{
public:
   T No1;
   T No2;

    Arithmetic(T A, T B) 
    {
      No1 = A;
      No2 = B;
  
    }
   T Addition()
      {
      T Ans ;
        Ans = No1 + No2;
        return Ans;
      }

      T Substractor()
      {
       T Ans ;
        Ans = No1 - No2;
        return Ans;
      }

};
int main()
{
      Arithmetic<double> aobj1(30.5,11.6);  // error


      cout<<aobj1.Addition()<<"\n";
      cout<<aobj1.Substractor()<<"\n";
      
      
    return EXIT_SUCCESS;
}

