#include <iostream>
using namespace std;
class reverse
{
private:
   int n,rev=0;

public:
    void calculate();
    void print();
    
};

void reverse::calculate()
{
    cout << "enter  no ";
    cin >> n;
    while(n!=0)
    {
      rev=rev*10+n%10;
       n=n/10;

    }
}

void reverse::print()
{
    cout << "reverse no " << rev;
}

int main()
{
    reverse o1;
    o1.calculate();
    o1.print();

    return 0;
}