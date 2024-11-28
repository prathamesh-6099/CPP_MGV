# include <iostream>
using namespace std;
void even (int);
int main()
{int num=0;
cout<<"enter number"<<endl;
cin>>num;
 even(num);
return 0;

}


void even (int n)
{
    for(int i=2;i<=n*2;i++)
    {if (i%2==0)
      {
        cout<<i<<endl;
      }
     
    }

}