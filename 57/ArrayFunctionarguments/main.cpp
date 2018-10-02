#include <iostream>

using namespace std;


int sumofelements(int a[],int size)
{
    int i,sum=0;

    cout<<"size in sumofelements()"<<sizeof(a)<<" "<<sizeof(a[0])<<endl;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int a[]={1,2,3,4,5};

    int size=sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    cout<<"size in main()"<<sizeof(a)<<" "<<sizeof(a[0])<<endl;
    int total=sumofelements(a,size);
    cout<<"Total is:"<<total<<endl;
    return 0;
}
