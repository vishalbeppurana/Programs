#include<iostream>
using namespace std;
struct student
{
    int marks1,marks2,marks3;
    char name[20];
    int rollno;
};
int main()
{
    struct student s[100];
    int n,i,j,sum=0;
    cout<<"Enter the no of students:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the rollno:"<<endl;
        cin>>s[i].rollno;
        cout<<"Enter the name:"<<endl;
        cin>>s[i].name;
        cout<<"Enter the marks:"<<endl;
        cin>>s[i].marks1>>s[i].marks2>>s[i].marks3;
        sum=s[i].marks1+s[i].marks2+s[i].marks3;
         cout<<"The Total is:"<<sum<<endl;

//        for(j=0;j<=2;j++)
//        {
//           cin>>s[j].marks;
//        }

    }
    cout<<"*******************************************************"<<endl;
    cout<<"**************STUDENT DETAILS*************************"<<endl;
    cout<<"*******************************************************"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Rollno:"<<s[i].rollno<<endl;
        cout<<"Student name:"<<s[i].name<<endl;
        cout<<"Student marks:"<<s[i].marks1<<" "<<s[i].marks2<<" "<<s[i].marks3<<endl;
        cout<<"The Total is:"<<sum<<endl;

//        for(j=0;j<=2;j++)
//        {
//           cin>>s[j].marks;
//        }
          cout<<"\n";

    }


}

