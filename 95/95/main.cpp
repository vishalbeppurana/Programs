#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1,file2;
    int num;
    file1.open("/home/vishal/Documents/Even.txt",ios::app);
    file2.open("/home/vishal/Documents/Odd.txt",ios::app);
    if(!file1)
    {
         cout<<"File not opened"<<endl;
    }
    else
    {
          cout<<"File opened successfully"<<endl;

    }
    if(!file2)
    {
         cout<<"File not opened"<<endl;
    }
    else
    {
          cout<<"File opened successfully"<<endl;

    }
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"\nEven number"<<num;
        file1<<num;
    }
    else
    {
        cout<<"\nOdd number"<<num;
        file2<<num;
    }
    return 0;
}

