#include<iostream>
using namespace std;
void upper_string(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        i++;
    }
}
int main()
{
    char string[100];
    cout<<"Enter the string:"<<endl;
    cin>>string;
    upper_string(string);
    cout<<"String to Uppercase:"<<string<<endl;
}
