#include<iostream>
using namespace std;
void fun(int num)
{
    if(num%2==0)
    {
        cout<<"Number is even number";

    }
    else
    {
        cout<<"Number is odd number";
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    fun(n);
    return 0;
}
