#include<stdio.h>
int main()
{
        if(fork()==0)
        {
                printf("hello\n");
                printf("in child before sleep pid=%d ppid=%d\n",getpid(),getppid());
                sleep(10);
                printf("in child after sleep pid=%d ppid=%d\n",getpid(),getppid());
        }
else
{
        printf("in parent \n");
        while(1);
}
}
