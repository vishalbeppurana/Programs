#include<iostream>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int i,j;
    cout<<"Enter the String1:"<<endl;
    cin>>str1;
    cout<<"Enter the String2:"<<endl;
    cin>>str2;
    for(i=0;str1[i]!='\0';i++);
    cout<<"Length of string1:"<<i<<endl;
    for(j=0;str2[j]!='\0';j++);
    cout<<"Length of string2:"<<j<<endl;
    if(str1[i]>str2[j])
    {
        cout<<str1<<" "<<" is greater"<<endl;
    }
    else
    {
          cout<<str2<<" "<<" is greater"<<endl;
    }


}
