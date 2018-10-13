#include<iostream>
using namespace std;
int main()
{
    int a[10][10],n,i,j;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The array elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Anti Diagonal matrix:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i+j==n-1)
           {
               cout<<a[i][j]<<" ";
           }
           else
           {
               cout<<"0"<<" ";
           }
        }
        cout<<endl;
    }
}
