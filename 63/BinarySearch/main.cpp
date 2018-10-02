#include <iostream>
#include<algorithm>
using namespace std;

void show(int a[],int asize)
{
    for(int i=0;i<asize;++i)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]= {9,8,7,6,5,4,3,2,1,0};
    cout<<"\nSize of a\n"<<sizeof(a);
    cout<<"\nSize of a[0]\n"<<sizeof(a[0]);
    int asize = sizeof(a)/sizeof(a[0]);
    cout<<"\nElements before sorting\n";
    show(a,asize);
    sort(a,a+10);
    cout<<"\nElements after sorting\n";
    show(a,asize);
    cout<<"\n Elements to be found is 4\n";
    if(binary_search(a,a+10,4))
    {
        cout<<"\nElement is found\n";
    }
    else
    {
        cout<<"\nElement is not found\n";
    }
    cout<<"\n Elements to be found is 10\n";
    if(binary_search(a,a+10,10))
    {
        cout<<"\nElement is found\n";
    }
    else
    {
        cout<<"\nElement is not found\n";
    }
    return 0;
}
