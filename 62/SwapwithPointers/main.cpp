#include <iostream>

using namespace std;
void swap(int *num1,int *num2)
{
    int temp;
    cout<<"Address of num1 in swap:"<<num1<<endl;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;

    cout<<"Address of num1 in main()"<<&num1<<endl;
    cout<<"\nBefore Swapping:"<<endl;
    cout<<num1<<"\t"<<num2;
    swap(&num1,&num2);
    cout<<"\nAfter Swapping:"<<endl;
    cout<<num1<<"\t"<<num2;
    return 0;
}
