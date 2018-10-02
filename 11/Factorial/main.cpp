#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1,i;
    for(i=a;i>=1;i--)
    {
        fact=fact*i;
    }
   return fact;
}

int main()
{
    int n;
    cout<<"\nEnter thr number:";
    cin>>n;
    cout<<" Factorial is:"<<factorial(n);
    return 0;
}
