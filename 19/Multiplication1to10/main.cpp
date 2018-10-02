#include<iostream>
using namespace std;
int main()
{
    int i,a[20],n,j;
    cout<<"Enter the numbers:"<<endl;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            n=i*j;
            cout<<i<<" "<<"X"<<" "<<j<<" "<<"="<<n<<endl;

        }

    }

    for(i=1;i<=10;i++)
    {
        //cout<<a[i]<<" ";
        n=a[i]*i;
        cout<<a[i]<<" "<<"X"<<i<<" "<<"="<<n<<endl;
    }

    return 0;
}

