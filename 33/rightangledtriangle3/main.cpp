#include<iostream>
using namespace std;

int main()
{
    int i,j,no=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            no++;
            cout<<no<<" ";
        }
        cout<<endl;
    }
    return 0;
}
