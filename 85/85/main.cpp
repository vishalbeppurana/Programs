#include<iostream>
using namespace std;
int main()
{

    int a[2][3][2],i,j,k;
    cout<<"Enter the elements in 3 Dimensional array:"<<endl;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                cin>>a[i][j][k];
            }
        }
    }
    cout<<"Display elements in 3 Dimensional array:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                cout<<"Elements are:"<<a[i][j][k]<<endl;
            }
        }
    }
   return 0;
}
