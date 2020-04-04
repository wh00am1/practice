#include <stdio.h>

int main()
{
	char userinput[696];
	while(scanf("%s", userinput) != EOF)
	{
		printf("hello, %s\n", userinput);
	}
}
