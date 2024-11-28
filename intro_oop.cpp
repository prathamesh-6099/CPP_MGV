#include <iostream>
using namespace std;

class circle 
{  /* value of the private data members cant changed by member functions>>>
    and public data members can changed by member function*/
   
    private : float r;//<<private data members
    float py=3.14;
    public :   
        float area;
    public: int n=2;//<<public data members
          
            
    public : void calculate();//<<member function
    
   
};
     void circle :: calculate()
  {     //This is execute because i used py variabe as public in the class!
       cout<<"enter radius of circle ";
         cin>>r;
        area=py*r*r;
       cout<<"area of cirlce is = "<<area;
    }
int main()
{
    circle a1; //<<object decleration
    a1.calculate();
   
    

    return 0;
    

}

  
    

  

   
  
  

  
 