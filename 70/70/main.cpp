#include<iostream>
using namespace std;
int main()
{
    int i,Number=1,count;
    cout<<"Prime numbers from 1 to 100:"<<endl;
    while(Number<=100)
    {
        count = 0;
        i = 2;
        while(i<=Number/2)
        {
            if(Number%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0 && Number!=1)
        {
            cout<<Number<<" ";
        }
        Number++;
    }
    return 0;
}
