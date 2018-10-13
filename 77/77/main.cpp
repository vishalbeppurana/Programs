#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
            cout<<"The sum is"<<" "<<sum<<endl;
        }
    }
    if(sum==num)
    {
        cout<<"Perfect number"<<" "<<num<<endl;
    }
    else
    {
       cout<<"Not Perfect number"<<" "<<num<<endl;
    }
}
