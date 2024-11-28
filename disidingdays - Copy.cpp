#include <iostream>
using namespace std;
int main ()
{ int day;
cout<<"enter number 1 to 7 for your corresponding day";
cin>>day;
switch( day )
{ case 1: cout<<"today is sunday ";break;
  case 2: cout<<"today is monday ";break;
  case 3: cout<<"today is tuesday ";break;
  case 4: cout<<"today is wednesdady";break;
  case 5: cout<<"tosday is thursday";break;
  case 6: cout<<"today is friday";break;
  case 7: cout<<"today is saturaday";break;
  
  default : cout<<"please enter a valid day";break;
}
 
return 0;
}