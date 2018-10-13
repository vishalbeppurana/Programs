#include<iostream>
using namespace std;
int main()
{
    int a[10][10][10],b[10][10][10],c[10][10][10];
    int i,j,k;
    int row1,col1,row2,col2;
    cout<<"Enter the row1:"<<endl;
    cin>>row1;
    cout<<"Enter the column1:"<<endl;
    cin>>col1;
    cout<<"Enter the row2:"<<endl;
    cin>>row2;
    cout<<"Enter the column2:"<<endl;
    cin>>col2;
    cout<<"Enter the first matrix:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            for(k=0;k<row1;k++)
            {


              cin>>a[i][j][k];
            }

        }
    }
    cout<<"Enter the second matrix:"<<endl;
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0;k<row1;k++)
            {

                cin>>b[i][j][k];

            }

        }
    }
    cout<<"The First matrix:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            for(k=0;k<row1;k++)
            {

            cout<<a[i][j][k]<<endl;
            }
        }
    }
    cout<<"The Second matrix:"<<endl;
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0;k<row1;k++)
            {

            cout<<b[i][j][k]<<endl;
            }
        }
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<row2;j++)
        {
            for(k=0;k<row2;k++)
            {


              c[i][j][k]=a[i][j][k]+b[i][j][k];
            }
        }
    }
     cout<<"Addition of two matrices:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<row2;j++)
        {
            for(k=0;k<row2;k++)
            {
               cout<<c[i][j];
            }
        }
    }

}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a[10][10],b[10][10],c[10][10];
//    int i,j;
//    int row1,col1,row2,col2;
//    cout<<"Enter the row1:"<<endl;
//    cin>>row1;
//    cout<<"Enter the column1:"<<endl;
//    cin>>col1;
//    cout<<"Enter the row2:"<<endl;
//    cin>>row2;
//    cout<<"Enter the column2:"<<endl;
//    cin>>col2;
//    cout<<"Enter the first matrix:"<<endl;
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<col1;j++)
//        {
//            cin>>a[i][j];
//        }
//    }
//    cout<<"Enter the second matrix:"<<endl;
//    for(i=0;i<row2;i++)
//    {
//        for(j=0;j<col2;j++)
//        {
//            cin>>b[i][j];
//        }
//    }
//    cout<<"The First matrix:"<<endl;
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<col1;j++)
//        {
//            cout<<a[i][j]<<endl;
//        }
//    }
//    cout<<"The Second matrix:"<<endl;
//    for(i=0;i<row2;i++)
//    {
//        for(j=0;j<col2;j++)
//        {
//            cout<<b[i][j]<<endl;
//        }
//    }

//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<row2;j++)
//        {
//            c[i][j]=a[i][j]+b[i][j];
//        }
//    }
//     cout<<"Addition of two matrices:"<<endl;
//    for(i=0;i<row1;i++)
//    {
//        for(j=0;j<row2;j++)
//        {
//             cout<<c[i][j];
//        }
//    }


//}
