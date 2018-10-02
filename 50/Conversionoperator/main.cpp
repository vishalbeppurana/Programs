#include <iostream>
using namespace std;
class conversion
{
    int num,den;
public:
    conversion(int n,int d)
    {
        num=n;
        den=d;
    }
    operator float() const{
        return (float)num/(float)den;
    }

};

int main()
{
    conversion c(2,4);
    float val= c;
    cout<<"Fraction value is:"<< val;
    return 0;
}
