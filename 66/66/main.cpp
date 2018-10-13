#include<iostream>
using namespace std;
int main()
{
    int i,j,no,space;

    cout<<"Enter the size:"<<endl;
    cin>>no;

    for(i=1;i<=no;i++)
    {
        for(space=0;space<=(no-i);space++)
        {
            cout<<" ";
        }

         for(j=1;j<=i;j++)
         {


            cout<<"*";
            cout<<" ";


         }

         cout<<endl;


    }
    return 0;

}
