#include <stdio.h>

int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2   链式访问
	printf("%d\n", strlen("abc"));

	return 0;
}