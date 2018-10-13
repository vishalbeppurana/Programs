#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j;
    cout<<"Enter the Size:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
             if(a[j]>a[j+1]);
             cout<<"Largest"<<a[j]<<endl;
        }

    }}
