#include<iostream>
using namespace std;
int main()
{
    int row,col,space,n,no;
//    cout<<"Enter the rows:"<<endl;
//    cin>>no;
    for(row=0;row<3;row++)
    {

        for(space=0;space<(3-row);space++)
        {

            cout<<" ";
        }


        n=1;
        for(col=0;col<=row;col++)
        {
            cout<<n<<" ";
            n=n*(row-col)/(col+1);

        }
        cout<<endl;
    }

     return 0;
    }



