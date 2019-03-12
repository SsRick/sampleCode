#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#define LIM 9999990


int main() 
{
	int i;
	int *data[LIM];
	for(i=0;i<LIM;i++)
	{
		data[i]=malloc(4096);
		*data[i]=i;
	}

	sleep(200);
	return 0;

}
