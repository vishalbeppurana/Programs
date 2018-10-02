#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void displaya()
    {
        a=10;
        cout<<"Class A"<<endl;
    }
};
class B:virtual public A
{
    int b;
public:
    void displayb()
    {
       b=20;
        cout<<"Class B"<<endl;
    }
};
class C:virtual public A
{
    int c;
public:
    void displayc()
    {
        c=30;
        cout<<"Class C"<<endl;
    }
};
class D:public B,public C
{
    int d;
public:
    void displayd()
    {
        d=40;
        cout<<"Class D"<<endl;
    }
};
int main()
{
    D obj;
    obj.A::displaya();
    obj.B::displayb();
    obj.C::displayc();
    obj.D::displayd();
    return 0;
}

