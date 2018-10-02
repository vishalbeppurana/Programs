
#include<iostream>
using namespace std;
int main()
{
    char string[100];
    int cap=0,small=0,special=0;
    int i;
    cout<<"Enter the string:"<<endl;
    cin>>string;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]>='A' && string[i]<='Z')
        {
            cap++;
        }

        else if(string[i]>='a' && string[i]<='z')
        {
            small++;
        }

       else //if(string[i]>='0'&&string[i]<='9')
        {
           special++;
        }
    }
    cout<<"Length of string:"<<i<<endl;

    cout<<"The count of capital letter,small letter and special characters:"<<cap<<" "<<small<<" "<<special<<endl;

    return 0;
}
