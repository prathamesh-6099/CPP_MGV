#include <iostream>
using namespace std;

int main()
{ 
    int n=0;
    cout<<"enter number to find facctors:\t";

     cin>>n;

      cout<<"factors:"<<endl;

     for(int i=2;i<n;i++)
      {  
        if(n%i==0)
        {   
            cout<<i<<endl;
           
        }
      }
    

      return 0;

    
    
    }