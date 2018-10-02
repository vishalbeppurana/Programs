#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[100];
    int i,j,n=0;
    cout<<"Enter the string:"<<endl;
    cin.getline(str,100);
    for(i=0;str[i]!='\0';i++);
    cout<<"Length of the string:"<<i<<endl;
    i=0;
    while (str[i]!='\0')
    {

        if(str[i]==' ')
        {
          for(j=n;j<=i;j++)
          {

             cout<<str[j];
             n++;

          }
           cout<<endl;
        }
       i++;
       //cout<<i;

    }
  return 0;





}
