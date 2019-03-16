#include<iostream>
using namespace std;

int main()
{
  int a=2,b=3;
   	
  swap(a,b);
  cout<<"after swaping a="<<a<<"b="<<b; 	
}
	
	
	int swap(int x,int y)
	 {
	   int z;
	   z=x;
	   x=y;
	   y=z;
         cout<<"swap value is x="<<x<<"y="<<y;
	 return (x,y);
	 }		
