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
    int k=0;
    int count=0;
    for(k=0;k<=i;k++)
    {
//       if(str[k]==' ')
//       {
//           cout<<str[k+1]<<str[k+2]<<endl;
//       }

        if(str[k]==' ' || str[k]=='\0')
        {
          cout<<"Length of word"<<" "<<count<<endl;

          count=0;
        }
       else
        {
            count++;
        }


    }
  return 0;
}
