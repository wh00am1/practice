#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *str)
{
	char buffer[24];
	int *ret;
	strcpy(buffer, str);
}

int main(int argc, char **argv)
{
	int x;
	func(argv[1]);
	x = 1;
	printf("x is 1\n");
	printf("x is 0\n");
	system("pause");
}