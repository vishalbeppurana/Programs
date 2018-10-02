#include<iostream>
using namespace std;
int main()
{
    int num,n;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        n = num *i;
        cout<<"\n"<<num<<"x"<<i<<"="<<n;
    }
    getchar();
    return 0;
}
