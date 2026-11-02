#include<iostream> // generic code
using namespace std ;
template <class T>
T Addition(T No1, T No2) 
{
   T Ans ;
    Ans = No1 + No2;
return  Ans;

}
int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.05f,11.5f)<<"\n";
    cout<<Addition(10.3,11.44)<<"\n";




    return EXIT_SUCCESS;
}

