#include<iostream>// specific code
using namespace std ;
class Arithmetic
{
public:
    double No1;
    double No2;

    Arithmetic(double A, double B) ;
    double Addition();
    double Substractor();
    };

  Arithmetic :: Arithmetic(double A, double B) 
  {
    No1 = A;
    No2 = B;
  }
  double Arithmetic :: Addition()
    {
      double Ans ;
      Ans = No1 + No2;
      return Ans;
    }

    double Arithmetic :: Substractor()
    {
      double Ans ;
      Ans = No1 - No2;
      return Ans;
    }
int main()
{
Arithmetic aobj1(30.5,11.6);
Arithmetic aobj2(50.5,21.6);


cout<<aobj1.Addition()<<"\n";
cout<<aobj2.Addition()<<"\n";


cout<<aobj1.Substractor()<<"\n";
cout<<aobj2.Substractor()<<"\n";
    return EXIT_SUCCESS;
}

