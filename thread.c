#include<stdio.h>
void add(int a,int b)
{
	int c=a+b;
	printf("%d \n",c);
}
int main()
{
               printf("hello\n");
                printf("in before sleep pid=%d ppid=%d\n",getpid(),getppid());
		add(10,3);
                printf("in after sleep pid=%d ppid=%d\n",getpid(),getppid());
        
}
