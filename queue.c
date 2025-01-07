#include<stdio.h>
#define MAX 100
int rear=-1,size1,element,i,front=-1;
int arr1[MAX];
void enque()
{
        if (rear==size1-1)
        {
            printf("the queue is full \n");
        }
        else
        {
            if (front==-1)
            {
                front=0;
            }
            printf("enter element \n");
            scanf("%d",&element);
            rear = rear+1;
            arr1[rear] = element;

        }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("the que is empty\n");
    }
    else{
        printf("element to be deque %d \n",arr1[front]);
        front=front+1;
    }

}
void traversal()
{
    if (front == -1 || front > rear)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf(" all elements in queue is\n");
        for(i=front;i<=rear;i=i+1)
        {
            printf("%d",arr1[i]);
        }
    }
}

int main()
{
int choice;
printf("enter the zise of queue\n");
scanf("%d",&size1);
do{
    printf("\nchoose your process from \n 1:enqueue\n 2:dequeue\n 3:traversal\n 4:exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            
            enque();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traversal();
            break;
        case 4:
                return(0);
        default:
                printf("enter correct choice\n");
                break;


    }

}
while(choice!=4);
{
    return(0);
}
}

