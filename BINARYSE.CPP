#include <iostream>
using namespace std;
int main()
{
int i, first,last,middle,search;
int array[]={1,2,3,4,5,6,7,8,9,10};
//in binary search array should be in sorted order;
first=0;
last=9;
middle=(first+last)/2;

while(first<=last){
if (array[middle]<search)
first=middle+1;
else if(array[middle]>search){
last=middle-1;
 }
else
cout<<array[middle]<<"is presnt in array"<<"at position"<<middle<<endl; break;
}

return 0;

}

