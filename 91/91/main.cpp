#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,size,temp;
    cout<<"Enter the size:"<<endl;
    cin>>size;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-i)-1;j++)
        {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }

    cout<<"The sorted elements are:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
