#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t pid,a;
printf("press DEL to stop process:\n");
pid=fork();
if(pid<0)
{
printf("child process is not created\n");
}
else if(pid==0)
{
a=nice(7);
printf("child process priority=%d\n",a);
sleep(1);
}
else
{
a=nice(3);
printf("Parent process priority =%d\n",a);
sleep(1);
}
}

