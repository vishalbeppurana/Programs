#include <iostream>
using namespace std;


int add(int *a,int *b)
{
    cout<<"The pointers address  of A in add():"<<a<<endl;
    cout<<"The address of A in add() "<<&a<<endl;
    int c=(*a) + (*b);
    //return c;
}
void printWorld()
{
    cout<<"Hello world"<<endl;
}
int main()
{
    int a=2,b=3;

    cout<<add(&a,&b)<<endl;
    printWorld();
    cout<<"The address  of A in main():"<<&a<<endl;
    return 0;
}
