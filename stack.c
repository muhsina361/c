#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int element)
{
	if(top==max-1)
	{                           
		printf("stack overflow");
	}
	else
	{
		top++;
		stack[top]=element;
		printf("pushed %d into stack \n",element);
	}
}
int pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return -1;
	}
	else
	{
		int popped_element=stack[top];
		top--;
		printf("popped %d into stack \n",popped_element);
	}
	
}
void traversal()
{
	if(top==-1)
	{
		printf("stack is empty");
		
	}
		
	else
	{
		printf(" stack element are: \n  ");
		for(int i=top;i>=0;i--)
		{
			printf(" %d  ",stack[i]);
		}

	}
}

int main()
{
	int choice, element;
	do{
	printf(" 1.Push \n 2.Pop \n 3.Traveral \n 4. Exit \n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter element to push: \n");
		scanf("%d",&element);
		push(element);
		break;
	case 2:
		pop();
		break;
	case 3:
		traversal();
		break;
	case 4:
		break;
	default:
		printf("invalid choice \n");
		break;
				}
	}
	while(choice!=4);
	{
		return 0;
	}
}
	
	
