#include <iostream>
using namespace std;

void circle(float &, float &, float &) ;
int main()
{
    float a, c, r;
    cout << "enter radius";
    cin >> r;
   circle(a, c, r);
    cout << "area of circle" << a << endl;
    cout << "circumference of circle"<<c;

    return 0;
}

void circle(float &a, float &c, float &r)  //it is not neccesary to take same variables;
{
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
}