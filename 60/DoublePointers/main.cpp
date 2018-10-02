#include <iostream>

using namespace std;
int main()
{
    int x=5;
    int *p;
    p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<"Value of *p :"<<*p<<endl;
    cout<<"Address of *p:"<<p<<endl;
    cout<<"Value of **q :"<<**q<<endl;
    cout<<"Address of **q:"<<q<<endl;
    cout<<"Value of ***r :"<<***r<<endl;
    cout<<"Address of ***r:"<<r<<endl;
}
