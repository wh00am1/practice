#include <stdio.h>

int main()
{
	int i;
	while(scanf("%d", &i) != EOF)
	{
		if(i % 400 == 0)
			printf("閏年\n");

		else if(i % 100 == 0)
			printf("平年\n");

		else if(i % 4 == 0)
			printf("閏年\n");

		else
			printf("平年\n");
	}
	return 0;
}