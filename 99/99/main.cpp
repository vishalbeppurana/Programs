
#include<iostream>
using namespace std;
int main()
{
   char text[1000], blank[1000];
   int c = 0, d = 0;

   cout<<"Enter some text"<<endl;
   cin.getline(text,1000);

   while (text[c] != '\0') {
      if (text[c] == ' ') {
         int temp = c + 1;
         if (text[temp] != '\0') {
            while (text[temp] == ' ' && text[temp] != '\0') {
               if (text[temp] == ' ') {
                  c++;
               }
               temp++;
            }
         }
      }
      blank[d] = text[c];
      c++;
      d++;
   }

   blank[d] = '\0';

   cout<<"Text after removing blanks"<< blank<<endl;

   return 0;
}
