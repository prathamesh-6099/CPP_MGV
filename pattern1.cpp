#include <iostream>
using namespace std;

void pattern(int, int);


int main()
{
    int ivalue1=0;
    int ivalue2=0;

    cout<<"enter rows amd column"<<endl;
    cin>>ivalue1>>ivalue2;

    pattern(ivalue1,ivalue2);

    return 0;
}


void pattern(int row, int col)
{ 
    int i,j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout<<"*"<<" ";

        }

        cout<<"\n";

    }

  


}