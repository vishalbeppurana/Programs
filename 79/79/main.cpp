#include<iostream>
using namespace std;
int main()
{
    int row,col,row1,col1;
    int a[10][10],b[10][10],i,j,k,c[10][10];
    cout<<"Enter the row1 and columns1:"<<endl;
    cin>>row>>col;
    cout<<"Enter the row2 and columns2:"<<endl;
    cin>>row1>>col1;
    cout<<"Enter the first matrix:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Print the first matrix:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    cout<<"Print the second matrix:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            cout<<b[i][j]<<endl;
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col1;j++)
        {
            c[i][j]=0;
        }
    }


     for(i=0;i<row;i++)
    {
        for(j=0;j<col1;j++)
        {
            for(k=0;k<col;k++)
            {
              c[i][j]+=a[i][k]*b[k][j];
            }


        }

     }
     cout<<"Product of  matrix:"<<endl;
     for(i=0;i<row;i++)
     {
         for(j=0;j<col1;j++)
         {
               cout<<c[i][j]<<endl;
         }
     }


    return 0;
}
