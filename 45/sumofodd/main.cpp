#include<iostream>
using namespace std;
int main()
{
    int sum=0,num,i;
    cout<<"Enter the number:";
    cin>>num;
    for(i=1;i<=num;i+=2)
    {
        sum=sum+i;
        cout<<"\nSum of Odd number"<<i<<"is"<<sum;
    }
    return 0;
}
