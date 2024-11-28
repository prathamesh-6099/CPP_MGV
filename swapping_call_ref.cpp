#include <iostream>
using namespace std;


void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    cout<<*x<<*y;

}

int main()
{
    int a,b;
    cout<<"enetr two no "<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"a="<<a<<"b="<<b;


    return 0;
}