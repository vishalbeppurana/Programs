#include<iostream>
#include<fstream>
int main()
{
   FILE *fp1, *fp2;
   char ch[100];
   int i;


   fp1 = fopen("/home/vishal/Documents/Write.txt.txt", "r");
   fp2 = fopen("/home/vishal/Documents/Write.txt", "w");
   i=0;
   while (1)
   {
      ch[i] = fgetc(fp1);

      if (ch[i] == EOF)
         break;
      else
         putc(ch[i], fp2);
   }

   printf("File copied Successfully!");
   fclose(fp1);
   fclose(fp2);
}
