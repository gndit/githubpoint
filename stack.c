/*stack as an linked list*/
#include<stdio.h>
#include<stdlib.h>
struct stack
   {
    int data;
    struct stack* next;	
   }*top=NULL;
void main()
 {
 int choice,sel,data;
 struct stack* top,*newnode;
while(1)
 {
  printf("\n menu \n1 push \n2 pop \n3 display \n4. exit");
  printf("\n enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1://push
   push();
   break;
  case 2://pop
   pop();
    break;
  case 3://display
   display();
    break;
  default ://
    printff("\n enter valid choice");
    break;
   }
  };
  }
  
push()
{
 struct stack* newnode;
 newnode=malloc(sizeof(struct stack*));
 printf("\n enter the data that you want to store");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
if(top==NULL)
{
 top=newnode;
}
else
{
 newnode->next=top;
 top=newnode;
printf("\n element pushed on stack");
}
}
pop()
{
 struct stack* temp;
temp=top;
top=top->next;
free(temp);
printf("\n item is poped");
}
display()
{
 struct stack* temp;
 temp=top;
 while(temp!=NULL)
  {
   printf("\n %d",temp->data);
   temp=temp->next;
  }
}


 
 



 
