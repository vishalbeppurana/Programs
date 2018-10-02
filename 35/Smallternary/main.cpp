#include<iostream>
using namespace std;
int main()
{
    int a,b,small;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    small=(a<b)?a:b;
    cout<<"The smallest of two numbers is:"<<small;
}
