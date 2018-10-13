#include<iostream>

using namespace std;
int main()
{
    int num[10];
    int size,i,j;
    cout<<"Enter the size:"<<endl;
    cin>>size;
    //int *ptr;
   // ptr=&num[0];
    cout<<"Enter the number:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"Reversed number is:"<<endl;
    for(i=0,j=size-i;i<size;i++,j--)
    {
        cout<<"Number is"<<num[j]<<endl;

    }

}
