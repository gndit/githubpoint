/* selection sorting */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void main()
 {
  int a[SIZE],i,item,n,j;
  printf("\n enter size of array");
  scanf("%d",&n);
  printf("\n enter unsorted number that you want to insert on array");
  for(i=0;i<n;i++)
  scanf("%4d",&a[i]);
  selection_sort(a,n);
  for(i=0;i<n;i++)
  printf("\n sorted array look like this %4d",a[i]);
}
 selection_sort(int a[],int n)
 {
  int temp,i,j;
  for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
      {
       if(a[i]>a[j])
        {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
	}
       }
    }
 }	  
    
  