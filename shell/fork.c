#include <stdio.h>
#include <unistd.h>
int main()
{
  pid_t my_pid = getpid();
  pid_t my_ppid = getppid();
  printf("First process ID: %u\n", my_pid);
  printf("First parent ID: %u\n", my_ppid);
  fork();
  my_pid = getpid();
  my_ppid = getppid();
  printf("Child's process ID: %u\n", getpid());
  printf("Child's father ID: %u\n", getppid());
  if(my_pid == 0)
  {
    printf("I am the child\n");
  }
  return(0);
}
