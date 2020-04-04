#include <stdio.h>

int main()
{
	int a;
	int b;
	int result;
	while(scanf("%d %d", &a, &b) != EOF)
	{
		result = 0;
		result = a+b;
		printf("%d\n", result);
	}
	return 0;
}