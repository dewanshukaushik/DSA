#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
   int info;
   struct nodetype *next;
   }node;
  node*head=NULL;
void main()
{
void traversal();
void insert();
int choice,item;
scanf("%d",&choice);
switch(choice)
{
case 1:
scanf("%d",&item);
insert();
break;
}
getch();
}
void insert()
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
scanf("%d",&ptr->info);
printf("%d",ptr->info);
if(head==NULL)
{
ptr->next=NULL;
}
else
{ ptr->next=head;
}
head=ptr;
}


