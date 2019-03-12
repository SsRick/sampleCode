#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int j = 7;

int main()
{
	
	int i = 5;

	fork();
	printf("%d ",++j);
	return 0;

}
