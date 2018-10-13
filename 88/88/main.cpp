#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    cout<<"The sum of first 10 natural numbers"<<endl;

    for(i=1;i<=10;i++)
    {
        sum = sum+i;
        cout<<"The sum is:"<<sum<<endl;
    }
    cout<<"The sum is:"<<sum<<endl;
}

