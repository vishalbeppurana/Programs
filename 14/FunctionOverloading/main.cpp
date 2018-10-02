#include<iostream>
using namespace std;
class  function
{

public:
      void fun1(int a)
      {

          cout<<"Value of A:"<<a;

      }
      void fun2(int a,int b)
      {
          int c;
          c=a+b;
          cout<<"\nResult of a+b"<<"="<<c;
      }
};
int main()
{
    function obj;
    obj.fun1(10);
    obj.fun2(10,20);
    return 0;


}
