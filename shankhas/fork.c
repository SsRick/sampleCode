#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("PID: %d\n",getpid());
	pid_t pid = fork();
	printf("fork returned %d\n", (int)pid);
	printf("PID: %d\n",getpid());
	return 0;
}
