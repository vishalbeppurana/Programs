#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[100];
    ofstream ofile;
    int i;
    ofile.open("/home/vishal/Documents/Uppercase.txt",ios::app);
    if(!ofile)
    {
        cout<<"File not opened"<<endl;
    }
    else
    {
         cout<<"File opened successfully"<<endl;
    }
    cout<<"Enter the string:"<<endl;
    cin.getline(str,100);
    i=0;
    while(str[i]!='\0')
    {
            if(str[i]>='a'&& str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            i++;
     }
    cout<<str;
    ofile<<str;

}
