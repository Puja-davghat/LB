#include<iostream>// generic code 
using namespace std ;
class Arithmetic
{
public:
    float No1;
    float No2;

    Arithmetic(float A, float B) //behavoiur1    // consttructor
    {
      No1 = A;
      No2 = B;
  

    }
    float Addition()// behaviour2 // method
      {
        float Ans ;
        Ans = No1 + No2;
        return Ans;
      }
    };
int main()
{
Arithmetic aobj1(10.5,11.6);
Arithmetic aobj2(20.5,21.6);


cout<<aobj1.Addition()<<"\n";
cout<<aobj2.Addition()<<"\n";
    return EXIT_SUCCESS;
}

