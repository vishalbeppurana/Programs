#include<iostream>
using namespace std;
void swap(int *first,int *second)
{
    int temp;
    temp=*first;
    *first=*second;
    *second=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"\nEnter the second number:";
    cin>>b;
    cout<<"\nBefore Swapping:";
    cout<<"\nValue of first number:"<<a;
    cout<<"\nValue of second number:"<<b;
    swap(&a,&b);
    cout<<"\nValue of first number:"<<a;
    cout<<"\nValue of second number:"<<b;
    getchar();
    return 0;

}
