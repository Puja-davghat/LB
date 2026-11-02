#include<iostream>// generic code 
using namespace std ;
class Arithmetic
{
public:
    double No1;
    double No2;

    Arithmetic(double A, double B) //behavoiur1    // consttructor
    {
      No1 = A;
      No2 = B;
  

    }
    double Addition()// behaviour2 // method
      {
        double Ans ;
        Ans = No1 + No2;
        return Ans;
      }

      double Substractor()// behaviour2 // method
      {
        double Ans ;
        Ans = No1 - No2;
        return Ans;
      }

    };
int main()
{
Arithmetic *aobj = new Arithmetic(11,10);

cout<<aobj->Addition()<<endl;


    return EXIT_SUCCESS;
}

