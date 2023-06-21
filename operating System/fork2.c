#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t pid,a;
pid=fork();
if(pid<0)
{
printf("child process is not created");
}
else if(pid==0)
{
a=getpid();
printf("child process id=%d",a);
}
else
{
a=getpid();
printf("Parent process =%d",a);
}
}

