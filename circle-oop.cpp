#include <iostream>
using namespace std;

class circle 
{
    private : float r;
    public :   float  py=3.14;
            float area;
    public: int n=2;
          
            
    public : void calculate();
   
};
     void circle :: calculate()
  {   
       cout<<"enter radius of circle ";
         cin>>r;
        area=py*r*r;
       cout<<"area of cirlce is = "<<area;
    }
int main()
{
    circle a1;
    a1.calculate();
    

    return 0;
    

}