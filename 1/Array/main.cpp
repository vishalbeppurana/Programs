#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
