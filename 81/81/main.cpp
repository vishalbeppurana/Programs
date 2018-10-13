#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[10][10],i,j;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]!=-a[j][i])
           {
              cout<<"Its Symmetric matrix";

           }
           else
           {

           }
        }

    }



     return 0;


}
