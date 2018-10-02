
#include<iostream>
using namespace std;
int main()
{
    int year,leap,notyear;
    cout<<"Enter the year:"<<endl;
    cin>>year>>notyear;
//    cout<<"Enter the not leap year:"<<endl;
//    cin>>notyear;
    leap =(year%400==0)||(year%4==0)?year:notyear;
    cout<<"Leap year"<<leap;
}
