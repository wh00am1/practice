#include <stdio.h>

int main()
{
	int t;
	int a;
	int b;
	int c;
	int d;
	int e;
	int i;

	scanf("%d", &t);
	for(i = 1; i <= t; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);

		if(b - a == c - b)
		{
			e = d + (b - a);
			printf("%d %d %d %d %d\n", a, b, c, d, e);
		}

		else
		{
			e = d * (b / a);
			printf("%d %d %d %d %d\n", a, b, c, d, e);
		}
	}
	return 0;
}