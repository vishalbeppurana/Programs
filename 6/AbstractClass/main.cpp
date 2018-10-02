#include<iostream>
using namespace std;
class A
{
public:
    virtual void display()=0;
};
class B:public A
{
    int val1;
public:
    B(int x)
    {
        val1=x;
    }
    void display()
    {
        cout<<"Value of Class B"<<" "<<val1<<endl;
    }
};
class C:public A
{
    int val2;
public:
    C(int x)
    {
        val2=x;
    }
    void display()
    {
        cout<<"Value of Class C"<<" "<<val2<<endl;
    }
};
int main()
{
    A *ptr;
    B objb(100);
    ptr=&objb;
    cout<<"A Points to Class B"<<endl;
    ptr->display();
    C objc(200);
    ptr=&objc;
    cout<<"A points to class C"<<endl;
    ptr->display();
    return 0;
}
