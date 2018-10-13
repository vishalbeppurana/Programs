#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[100];
    ofstream fout;
    fout.open("/home/vishal/Documents/Write.txt",ios::app);
    if(!fout)
    {
            cout<<"File not opened"<<endl;
    }
    else
    {
            cout<<"File opened successfully"<<endl;
    }
    cout<<"Enter the string"<<endl;
    cin.getline(str,100);
    cout<<str<<endl;
    fout<<str<<endl;
    fout.close();

    return 0;
}
