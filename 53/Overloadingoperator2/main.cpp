#include <iostream>

using namespace std;

//Overloading ++ operator
class overload {
private:
    int count;

public:
    overload()
        : count(4)
    {
    }

    void operator++()
    {
        count = count + 1;
    }
    void Display()
    {
        cout << "Count: " << count;
    }
};

int main()
{
    overload i;
    // this calls "function void operator ++()" function
    ++i;
    i.Display();
    return 0;
}
