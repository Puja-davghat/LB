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
      Arithmetic<double> aobj1(30.5,11.6);  
      Arithmetic<int> aobj2(30,11); 
      Arithmetic<float> aobj3(30.5f,11.6f); 


      cout<<aobj1.Addition()<<"\n";
      cout<<aobj2.Addition()<<"\n";
      cout<<aobj3.Addition()<<"\n";
      
      
      
    return EXIT_SUCCESS;
}

