#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    int a_val =4;
    float b_val = 4.5;
    ostringstream str1;
    ostringstream str2;
    str1<<a_val;
    str2<<b_val;
    string a = str1.str();
    string b = str2.str();
    cout<<"The integer to string is:"<<a<<endl;
    cout<<"The float to string is:"<<b<<endl;
    return 0;
}
