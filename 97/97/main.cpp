#include<iostream>
using namespace std;
void small(int a,int b)
{
    if(a<b)
    {
        cout<<"Smallest number is A";
    }
    else
    {
        cout<<"Smallest number is B";
    }
}
int main()
{
    int x,y;
    cout<<"Enter the value of A";
    cin>>x;
    cout<<"Enter the value of B";
    cin>>y;
    small(x,y);
    return 0;
}
