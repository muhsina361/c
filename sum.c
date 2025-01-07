#include<stdio.h>
# define MAX 100
int arr[MAX];
int main()
{
																												

	int element,i,sum=0;
        printf("enter the no of elements");
	scanf("%d",&element);
	for(i=0;i<element;i=i+1)
	{
     	scanf("%d",&arr[i]);
        }
	for(i=0;i<element;i=i+1)
	{
	sum=sum+arr[i];
	}
 	printf(" sum of array is %d",sum);

return(0);
		  

}
