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
Arithmetic <int> *aobj  = NULL;    

   aobj =  new Arithmetic  <int> (11,10);   

   cout<<aobj->Addition()<<endl;
   
    return EXIT_SUCCESS;
}

