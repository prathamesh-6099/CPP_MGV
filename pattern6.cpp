#include <iostream>
using namespace std;

void pattern(int, int);

int main()
{

   int ivalue1,ivalue2;
   cout<<"enter rows and column:"<<endl;
   cin>>ivalue1>>ivalue2;
   

   pattern(ivalue1,ivalue2); 

   return 0;
}

void pattern(int row,int col)
{
    int i=1;
    int j=1;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1||j==col)
            {
                cout<<"*"<<" ";

            }
          else
           cout<<"@"<<" ";

        }
    cout<<endl;
   
    }
cout<<"______________________________________________";
}