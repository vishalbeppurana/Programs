#include<iostream>
using namespace std;
class Student
{
    char name[10];
    int rollno,mark1,mark2,mark3;
    int total,average;
public:void getdata()
       {

        cout<<"Enter the name:";
        cin>>name;
        cout<<"\nEnter the roll number:";
        cin>>rollno;
        cout<<"\nEnter the mark1:";
        cin>>mark1;
        cout<<"\nEnter the mark2:";
        cin>>mark2;
        cout<<"\nEnter the mark3:";
        cin>>mark3;
       }
       void display()
       {
           cout<<"\nName:"<<name;
           cout<<"\nRoll Number:"<<rollno;
           cout<<"\nMark1:"<<mark1;
           cout<<"\nMark2:"<<mark2;
           cout<<"\nMark3:"<<mark3;
           total=mark1+mark2+mark3;
           cout<<"\nTotal is:"<<total;
           average=total/3;
           cout<<"\nAverage is:"<<average;
       }
};
int main()
{
    Student obj;
    obj.getdata();
    obj.display();
    return 0;
}

