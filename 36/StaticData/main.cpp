#include<iostream>
using namespace std;
class MCA
{

    int no;
    static int count;
public:void getval(int);
       void dispno();
};
int MCA::count=0;
void MCA::getval(int x)
{
    no=x;
    cout<<"\nValues is:"<<no;
    count++;

}
void MCA::dispno()
{
    cout<<"Counter= "<<count;
}
int main()
{
    MCA t1,t2,t3;
    t1.dispno();
    t2.dispno();
    t3.dispno();
    t1.getval(10);
    t2.getval(20);
    t3.getval(30);
    t1.dispno();
    t2.dispno();
    t3.dispno();
    return 0;
}

