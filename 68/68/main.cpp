#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int i;
    int word=0,alphabets=0,characters=0,vowels=0,consants=0,digits=0;

    cout<<"Enter the string:"<<endl;
    cin.getline(str,100);

    for(i=0;str[i]!='\0';i++)
    cout<<str[i];
    cout<<endl;

     for(i=0;str[i]!='\0';i++)
    {
      switch(str[i])
      {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
          vowels++;
          break;
      }

      consants=alphabets-vowels;
      if(str[i] == ' ')
      {
        word++;
      }
      else if((str[i]>='a' && str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
      {
          alphabets++;
      }
      else if(str[i]=='#'||str[i]==','||str[i]=='%'||str[i]=='$')
      {
          characters++;
      }
      else if(str[i]>='0' && str[i]<='9')
      {
          digits++;

      }

    }
    cout<<"Number of Word:"<<word<<endl;
    cout<<"Number of Alphabets:"<<alphabets<<endl;
    cout<<"Number of Characters:"<<characters<<endl;
    cout<<"Number of Vowels:"<<vowels<<endl;
    cout<<"Number of Consants:"<<consants<<endl;
    cout<<"Number of Digits:"<<digits<<endl;
}
