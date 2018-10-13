#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float s,a,b,c,area;
    cout<<"Enter the sides:"<<endl;
    cin>>a>>b>>c;

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of a triangle:"<<area<<endl;

    return 0;
}

