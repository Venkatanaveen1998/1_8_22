#include<stdio.h>
void even(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i%2==0) printf("%d ",i);
	}
}
void odd(int n)
{
	for(int i=1;i<=n;i++)
		if((i%2)!=0) printf("%d ",i);
}
int main()
{
	int n;
	printf("enter the  upto where u want find the even and odd no:\n");
	scanf("%d",&n);
	printf("this are even numbers \n");
	even(n);
	printf("\nthis are odd numbers \n");
	odd(n);

}
