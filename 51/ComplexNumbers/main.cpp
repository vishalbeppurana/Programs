#include <iostream>

using namespace std;
class Complex
{
    int real,imag;
public:
    Complex(int i=0,int j=0)
    {
        real=i;
        imag=j;
    }
    Complex operator +(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout<<real << "+i" << imag << endl;
    }
};
int main()
{
    Complex c1(10,5),c2(2,4);
    Complex c3= c1 + c2;
    c3.print();
    return 0;
}
