/*bubble sort */
#include<stdio.h>
#define SIZE 30
void main()
  {
   int i,n,a[SIZE];
   printf("\n enter the size of array");
   scanf("%d",&n);
  printf("\n enter %d unsorted number on array",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  bubble_sort(a,n);
  for(i=0;i<n;i++)
  printf("\n sorted array look like as %4d",a[i]);
  getch();
  }

 bubble_sort(int a[],int n)
  {
   int i,j,temp;
   for(i=0;i<n;i++)
    {
     for(j=0;j<n-i-1;j++)
      {
       if(a[j]>a[j+1])
        {
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	}
     }
   }
  }		
