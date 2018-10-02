#include<iostream>
using namespace std;
void add(int *a,int *b)
{
    int c;
    c=*a+ *b;
    cout<<"Addition of two values is:"<<c;
}
int main()
{
    int x=10,y=20;
    add(&x,&y);
    return 0;
}

