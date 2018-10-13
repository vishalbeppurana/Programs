#include<iostream>
using namespace std;
int main()
{
    int i,j,num,n=1,space;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(space=0;space<(num-i);space++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<n<<" ";
            n++;

        }

        cout<<endl;
    }
}
