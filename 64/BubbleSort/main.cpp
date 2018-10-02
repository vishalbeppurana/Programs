#include <iostream>
using namespace std;
int main()
{
    int a[10],temp,swap,i,j,size;
    cout<<"Enter the size\n";
    cin>>size;
    cout<<"Enter the elements\n";
    for(i =0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
       swap =0;
        for(j=0;j<(size-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           // swap=1;
            }
        }
        if(swap==0)
       {
            break;
        }
    }
    cout<<"Elements after sorting\n";
    for(i =0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}

