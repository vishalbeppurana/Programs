#include<iostream>
using namespace std;
int BinarySearch(int A[],int n,int x)
{

    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid =(start+end)/2;
        if(x == A[mid])
        {
            return mid;
        }
        else if(x<A[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,a[30],i,x;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter the number to be searched:"<<endl;
    cin>>x;
    int index = BinarySearch(a,n,x);
    if(index!= -1)
    {
        cout<<"The number"<<" "<<x<<" "<<"is found at"<<" "<<index<<endl;
    }
    else
    {
        cout<<"The number"<<" "<<x<<" "<<"is not found"<<endl;
    }
}
