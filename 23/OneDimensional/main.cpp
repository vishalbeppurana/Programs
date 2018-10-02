#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int no[5],i,sum=0;
    cout<<"Enter five elements"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>no[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<no[i]<<" ";
        sum=sum+no[i];
    }
    cout<<"Total:"<<sum;
    getchar();
    return 0;
}
