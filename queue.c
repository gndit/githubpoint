/*queue as an array */
#include<stdio.h>
#define  SIZE 50
#include<stdlib.h>
int rear=-1,front=-1;
void main()
{
int queue[SIZE],item;
 queue_insert(queue,10);
 queue_insert(queue,20);
 queue_insert(queue,30);
queue_display(queue);
queue_delete(queue);
queue_display(queue);
}
queue_insert(int queue[],int item)
{
 if(rear==SIZE-1)
{
   printf("\n queue is full");
}
 else
     rear++;
queue[rear]=item;
if(front==-1)
front=0;
 printf("\n inserted number is = %d",item);
}
 queue_delete(int queue[])
   {
	int item;
	if(rear==-1)
	{
	  printf("\n sorry queue is empty");
	}
else
	item=queue[front];
	if(front==rear)
	{
	 front=-1;
	 rear=-1;
	}
	front++;
	printf("\n deleted number is = %d",item);

    }
  queue_display(int queue[])
  {
    int item,i;
	if(rear==-1)
	{
	 printf("\n sorry queue is empty");
	}
	else
	for(i=front;i<=rear;i++)
	printf("\n %d",queue[i]);
   }
