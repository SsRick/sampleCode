#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int count = 0;
	while (fork() > 0) {
		count++;
		printf("%d ",count);
	}
	return 0;
}
