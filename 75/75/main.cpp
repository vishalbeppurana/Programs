
#include<iostream>
using namespace std;
struct Hotels
{
    string grade;
    char name[20];
    float roomcharge;
    int noofrooms;
};
int main()
{
    struct Hotels s[100];
    int n,i;
    cout<<"Enter the no of Hotels:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Hotel Name:"<<endl;
        cin>>s[i].name;
        cout<<"Enter the Hotel grade:"<<endl;
        cin>>s[i].grade;
        cout<<"Enter the Room charge"<<endl;
        cin>>s[i].roomcharge;
        cout<<"Enter the Number of rooms"<<endl;
        cin>>s[i].noofrooms;

    }
    cout<<"*******************************************************"<<endl;
    cout<<"**************HOTEL DETAILS*************************"<<endl;
    cout<<"*******************************************************"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Hotel Name:"<<s[i].name<<endl;
        cout<<"Hotel grade:"<<s[i].grade<<endl;
        cout<<"Room Charge"<<s[i].roomcharge<<endl;
        cout<<"Number of rooms"<<s[i].noofrooms<<endl;
//        for(j=0;j<=2;j++)
//        {
//           cin>>s[j].marks;
//        }
          cout<<"\n";

    }


}
