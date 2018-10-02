#include <iostream>

using namespace std;

#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{2,3,6},{4,5,8}};
    int (*p)[3]=a;

    cout<<"Address of A:"<<a<<endl;
    cout<<"Adress of a[0]:"<<&a[0]<<endl;
    cout<<"Adress of a[0][0]:"<<&a[0][0]<<endl;
    cout<<"Adress of a[0][1]:"<<&a[0][1]<<endl;
    cout<<"Adress of a[0][2]:"<<&a[0][2]<<endl;
    cout<<"Adress of a[1][0]:"<<&a[1][0]<<endl;
    cout<<"Adress of a[1][1]:"<<&a[1][1]<<endl;
    cout<<"Adress of a[1][2]:"<<&a[1][2]<<endl;
    cout<<"Value of a[0][0]:"<<a[0][0]<<endl;
    cout<<"Value of a[0][1]:"<<a[0][1]<<endl;
    cout<<"Value of a[0][2]:"<<a[0][2]<<endl;
    cout<<"Value of a[1][0]:"<<a[1][0]<<endl;
    cout<<"Value of a[1][1]:"<<a[1][1]<<endl;
    cout<<"Value of a[1][2]:"<<a[1][2]<<endl;
    cout<<"value of *(*a+0)=a[0][0]:"<<*(*a+0)<<endl;
    cout<<"value of *(*a+1)=a[0][1]:"<<*(*a+1)<<endl;
    cout<<"value of *(*a+2)=a[0][2]:"<<*(*a+2)<<endl;
    cout<<"value of *(*(a+1))=a[1][0]:"<<*(*(a+1))<<endl;
    cout<<"value of *(*(a+1)+1)=a[1][1]:"<<*(*(a+1)+1)<<endl;
    cout<<"value of *(*(a+1)+2)=a[1][2]:"<<*(*(a+1)+2)<<endl;




    cout<<"Address of pointer p:"<<p<<endl;
    cout<<"Address of pointer p:"<<p[0]<<endl;

}
