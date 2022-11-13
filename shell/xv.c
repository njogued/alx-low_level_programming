#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(void) {
	/* int sl; */
	size_t bufsize = 0;
	char *cleanbuffer, *buffer = NULL;
	char *args[2];
	pid_t pid;
	int n, i, status;
	/*char *username = getenv("USER");
	  printf("The user is: %s\n", username);
	  buffer = malloc(sizeof(char) * bufsize);
	  if(buffer == NULL)
	  {
	  perror("Failed to allocate buffer");
	  } */
	while (1)
	{
		putchar('$');
		putchar(' ');
		n = getline(&buffer, &bufsize, stdin);
		if (n == -1)
		{
			perror("Exiting");
			break;
		} 
		printf("%s\n", buffer);
		i = strlen(buffer);
		cleanbuffer = malloc(sizeof(char));
		strncpy(cleanbuffer, buffer, i-1);
		args[0] = cleanbuffer;
		args[1] = NULL;
		pid = fork();
		if (pid == 0)
		{
			execve(args[0], args, NULL);
		}
		else
		{
			wait(&status);
		}
	}
	/*free(buffer);
	  sl = sleep(3);
	  printf("slept: %d\n", sl);
	 */
	return(0);
}
