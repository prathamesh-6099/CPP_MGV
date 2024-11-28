#include <iostream>
using namespace std;
void pattern (int , int );
int main() {
int ivalue1,ivalue2;
 
 cout<<"enter row and cl"<<endl;
 cin>>ivalue1>>ivalue2;
 
 pattern(ivalue1,ivalue2 );

  
    return 0;
}



void pattern (int row ,int col)
{
    int i,j;
    int num;

    num=col;
   
    
    for(i=1;i<=row;i++)
    {  
        for(j=1;j<=col;j++)
        {
            
          
          cout<<num<<"\t";
          num=num-1;
           
        
          
         }
       num=col;
   cout<<endl;
    
    }  
    
}