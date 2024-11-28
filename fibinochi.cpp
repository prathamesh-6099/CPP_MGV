#include<iostream>
using namespace std;
void pattern(int,int);
int main()
{
    int row,col=0;
    int n=1;
    cout<<"enter row and column"<<endl;
    cin>>row>>col;
    pattern(row,col);
    
    return 0;
}

void pattern(int row, int col)
{   int n=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<n<<" ";
            n++;

  
        }
     
        cout<<endl;
    }
}