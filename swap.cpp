# include <iostream>
using namespace std;
// Call by reference>>>>>>>

inline void swap(int *a , int *b );
           //OR
// void swap(int &a, int &b) ;



int main()
{
    int a,b;
    cout<<"enter two numbers\n ";
    cin>>a>>b;
    cout<<"number before swaping\n"<<a<<" "<<b;

    swap(&a,&b);

     cout<<"\nnumber after swaping\n";
    cout<<"a="<<a<<" "<<"b="<<b;


   cout<<"\nTHANK YOU !!!";
     return 0;

}
  void swap(int *a, int *b)
{
 int temp = *a;
 *a= *b;
 *b= temp;
 




}



       //OR
// void swap(int &a,  int &b)
// {
//     int x=a;
//     a=b;
//     b=x;

// }


