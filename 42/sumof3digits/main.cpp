#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,a[3];
    cout<<"Enter the 3 digit numbers;"<<endl;
    for(i=1;i<=3;i++)
    {
        cin>>a[i];
    }
     cout<<"The 3 digit numbers are:"<<endl;
     for(i=1;i<=3;i++)
     {
         cout<<a[i]<<endl;
         sum=sum+a[i];
     }
    cout<<"Sum of 3 digit numbers are:"<<sum;
}

