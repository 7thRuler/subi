#include<stdio.h>
#include<stdlib.h>

void push();
void display();
struct node{
	int data;
	struct node *link;
};
struct node *start;
struct node *create()
{
	struct node *nptr=((struct node*)malloc(sizeof(struct node)));
	if(start==NULL)
	{
		return 0;
	}
	else
	{
		return nptr;
	}

		
}

void main()
{
int x;
printf("LINKED STACK");
printf("MENU");
printf("\n1.push\n2.pop\n3.display\n4.exit");
while(1)
{
	printf("\nenter your choice:");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
	 push();
	 break;
	case 3:
	 display();
	 break;
	case 4:
	 exit(0);
	 
	}
}
}
void push()
{
	struct node *nptr=create();
	
	struct node *temp;
	int a;
	
	printf("enter the element to push:");
	scanf("%d",&a);
	if(start==NULL)
	{
		nptr->data=a;
		nptr->link=NULL;
		start=nptr;
	}
	else{
		nptr->data=a;
		nptr->link=start;
		start=nptr;
	}
	
}
void display()
{
	struct node *temp;
	temp=start;
	while(temp->link!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
