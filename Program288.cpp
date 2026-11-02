#include<iostream> //generic code 
using namespace std ;
template<class T>
  class Arithmetic
  {
  public:
      T No1;
      T No2;

      Arithmetic(T A, T B) ;
      T Addition();
      T Substractor();
      };
  template<class T>
  Arithmetic <T> :: Arithmetic(T A, T B)   //error
  {
    No1 = A;
    No2 = B;
  }
  
  template<class T>
 T Arithmetic <T> :: Addition()   //error
    {
      T Ans ;
      Ans = No1 + No2;
      return Ans;
    }


template<class T>
    T Arithmetic <T> :: Substractor()   //error
    {
      T Ans ;
      Ans = No1 - No2;
      return Ans;
    }
  
  
int main()
{
Arithmetic <int> *aobj  = NULL;    

   aobj =  new Arithmetic  <int> (11,10);   

   cout<<aobj->Addition()<<endl;
   

delete aobj;
    return EXIT_SUCCESS;
}

