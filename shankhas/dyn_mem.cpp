#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	
	int *a= (int*)malloc(1);
	*a = 123456789;
	printf("%d\n", *a);
	printf("%d\n",(int) sizeof(*a));
free(a);	
	return 0;

}

