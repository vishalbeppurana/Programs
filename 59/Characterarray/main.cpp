#include<iostream>
using namespace std;
#include<string.h>
void printstring(char *c)
{
    while(*c!='\0')
    {
      c++;
      cout<<*c;

    }
   cout<<endl;

}

int main()
{
    char c[20]=" VISHAL";
     printstring(c);
    return 0;
}
