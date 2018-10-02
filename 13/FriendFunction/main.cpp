#include<iostream>
using namespace std;
class A;
class B
{
    int b;
public:
      void getb()
      {
          cout<<"\nEnter the value Of B:";
          cin>>b;
      }
      friend void add(A,B);
};
class A
{
    int a;
public:
      void geta()
      {
          cout<<"\nEnter the value Of A:";
          cin>>a;
      }
      friend void add(A,B);
};
void add(A obj1,B obj2)
{
    int c;
    c=obj1.a+obj2.b;
    cout<<"\nAddition of two numbers is:"<<c;
}
int main()
{
    A obj1;
    B obj2;
    obj1.geta();
    obj2.getb();
    add(obj1,obj2);
    return 0;
}
