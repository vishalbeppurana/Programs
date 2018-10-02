#include<iostream>
using namespace std;
void lower_string(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }
}

int main()
{
    char string[100];
    cout<<"Enter the string:"<<endl;
    cin>>string;
    lower_string(string);
    cout<<"String to lowercase:"<<string<<endl;
    return 0;

}
