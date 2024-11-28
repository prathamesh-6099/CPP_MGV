#include <iostream>
using namespace std;
class gcd
{
private:
    int a, b;

public:
    void calculate();
    void print();
};

void gcd::calculate()
{
    cout << "enter two no to calculate gcd";
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
}

void gcd::print()
{
    cout << "gcd no= " << a;
}

int main()
{
    gcd o1;
    o1.calculate();
    o1.print();
    return 0;
}