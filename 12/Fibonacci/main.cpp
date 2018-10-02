#include<iostream>
using namespace std;
int main()
{
    int i,t1=0,t2=1,n,nextTerm;
    cout<<"\nEnter the number:";
    cin>>n;
    cout<<"\nFibonacci Series:";
    for(i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    getchar();
    return 0;
}
