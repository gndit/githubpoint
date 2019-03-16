#include<iostream>
using namespace std;
# define n 4
void input(int a[][n],int b[][n],int c[][n])
{
 int i,j;
cout<<"enter first matrix";
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
	{
     cin>>a[i][j];
        }
   }
 c[i][j]=a[i][j]+b[i][j];
}
int main()
{
int a[n][n]= {{1,1,1,1},
	      {2,2,2,2},
              {3,3,3,3},
	      {4,4,4,4}};

int b[n][n] = {{1,1,1,1},
	      {2,2,2,2},
              {3,3,3,3},
	      {4,4,4,4}};	
int c[n][n];
int i,j;
input(a,b,c);
cout<<"result is first matrix";
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
	{
     cout<<c[i][j]<<" ";
	cout<<"\n";
        }
   }

return 0;
}
