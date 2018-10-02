
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
       int number, originalNumber, remainder, result = 0, n = 0 ;
        cout<<"Enter an integer:"<<endl;
        cin>>number;
        cout<<"Number:"<<number<<endl;
        originalNumber = number;
        cout<<"Original number:"<<originalNumber<<endl;
        while (originalNumber != 0)
        {
            originalNumber /= 10;
            cout<<"Original number:"<<originalNumber<<endl;
            cout<<++n<<endl;
        }
        originalNumber = number;
        cout<<"Original number:"<<originalNumber<<endl;
        while (originalNumber != 0)
        {
            cout<<"Original number:"<<originalNumber<<endl;
            remainder = originalNumber%10;
            cout<<"Remainder:"<<remainder<<endl;
            result += pow(remainder, n);
            cout<<"Result:"<<result<<endl;
            originalNumber /= 10;
        }
        if(result == number)
            cout<<" is an Armstrong number"<< number<<endl;
        else
            cout<<"is not an Armstrong number"<<number<<endl;

        return 0;
}
