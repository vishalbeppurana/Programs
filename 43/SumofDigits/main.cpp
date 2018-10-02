#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,num;
    cout<<"Enter the number:";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        sum=sum+i;
        cout<<"\nSum of Digit is:"<<sum;
    }

    return 0;
}

