#include<iostream>// generic code 
using namespace std ;
template <class T>

class Arithmetic
{
public:
   T No1;
   T No2;

    Arithmetic(T A, T B) //behavoiur1    // consttructor
    {
      No1 = A;
      No2 = B;
  
    }
   T Addition()// behaviour2 // method
      {
      T Ans ;
        Ans = No1 + No2;
        return Ans;
      }

      T Substractor()// behaviour2 // method
      {
       T Ans ;
        Ans = No1 - No2;
        return Ans;
      }

};
int main()
{
      /*Arithmetic aobj1(30.5,11.6);
      Arithmetic aobj2(50.5,21.6);


      cout<<aobj1.Addition()<<"\n";
      cout<<aobj2.Addition()<<"\n";


      cout<<aobj1.Substractor()<<"\n";
      cout<<aobj2.Substractor()<<"\n";
      */
    return EXIT_SUCCESS;
}

