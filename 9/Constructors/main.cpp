#include<iostream>
using namespace std;

class A
{
    int x;
public:
       A(){
          }
       A(int a)
       {
           x=a;

       }
       void display()
       {
            cout<<"\nValue of A:"<<x;
       }
};
int main()
{
    A obj1(10);
    obj1.display();
    A obj2 = obj1;
    obj2.display();

    return 0;
}
