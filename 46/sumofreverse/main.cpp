#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem,rev=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    while(num!=0)
    {
        rem= num % 10;
        sum = sum +rem;
        num = num /10;
        rev = rev *10+rem;
    }
    cout<<"The sum is:"<<sum;
    cout<<"The reversed number is:"<<rev;
    return 0;
}
