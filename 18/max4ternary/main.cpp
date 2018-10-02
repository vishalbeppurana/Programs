#include<iostream>
using namespace std;
int maxoffour(int a,int b,int c,int d)
{
    int e=(a>b)?a:b;
    int f=(c>d)?c:d;
    int g=(e>f)?e:f;
    return g;
}

int main()
{
    int a,b,c,d,num;
    cout<<"Enter the four numbers:"<<endl;
    cin>>a>>b>>c>>d;
    num=maxoffour(a,b,c,d);
   cout<<"Maximum of four numbers:"<<" "<<num<<endl;
}
