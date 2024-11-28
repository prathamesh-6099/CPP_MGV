#include <iostream>
using namespace std;

//To calculate area of circle and area of rectangle.....

int area(int , int );
float area(int );



int main()
{
    int l,b,r,area_r;
    float area_c;
    cout<<"enter length and breath:\n";
    cin>>l>>b;
    area_r= area( l, b);
    cout<<"\narea of rectangle is "<<area_r; 

    cout<<"\v";
    cout<<"_____________________________________";
    cout<<"\v";

    cout<<"\nenter radius of circle:"<<endl;
    cin>>r;
    area_c=  area( r);
    cout<<"area of circle is "<<area_c<<endl;

    cout<<"\v";
    cout<<"________________________________________"<<endl;
    cout<<"\v";
   
    cout<<"             THANK YOU !   "<<endl;
   
    cout<<"________________________________________";


    return 0;

}

int area(int l, int b)
{
   int area_r=l*b;
   return area_r;

}

float area(int r)
{
    float area_c= 3.14*r*r;
    
    return area_c;
}