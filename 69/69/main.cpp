#include<iostream>
using namespace std;
int main()
{
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int date,month,year,nextdate,nextmonth,nextyear,noofdays;
    cout<<"Enter the Date Month and Year:"<<endl;
    cin>>date>>month>>year;
    noofdays=months[month-1];
    if(month==2)
    {
        if(year%400==0)
        {
           if(year%100==0)
           {
               noofdays=28;
           }

        else if(year%4==0)
           {
               noofdays=29;
           }
         }
    }
     nextdate=date+1;
     nextmonth=month;
     nextyear=year;
     if(nextdate>noofdays)
     {
         nextdate=1;
         nextmonth++;
     }
     if(nextmonth>12)
     {
         nextmonth=1;
         nextyear++;
     }
    cout<<"The next Date Month and Year:"<<nextdate<<"/"<<nextmonth<<"/"<<nextyear<<endl;
}
