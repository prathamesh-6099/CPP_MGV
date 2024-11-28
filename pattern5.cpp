#include <iostream>
using namespace std;

void pattern(int);

int main()
{ int ivalue;
  
  cout<<"enter number of column"<<endl;
  cin>>ivalue;

  pattern(ivalue);

 return 0;

}


void pattern(int col)
{
    int j=0;
    for(j=2;j<=col;j++)
    {
        if(j%2==0)
        {
            cout<<j<<" ";

        }

        else
        {
            cout<<"*"<<" ";
        }
    }
  
}