#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a = (int*)malloc(4);
	int *b = (int*)malloc(4);
	printf("%d", a-b);
	return 0;
}
