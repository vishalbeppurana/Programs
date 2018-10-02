
#include<iostream>
using namespace std;
int main()
{
    int a[10],temp,i,j,min,loc,size;
    cout<<"\nEnter the array size:";
    cin>>size;
    cout<<"\nEnter the array elements:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<(size-1);i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<min)
            {
             min=a[j];
             loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nArray elements after selection sort:";
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}
