#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	int num, f, i;
	while(scanf("%d", num))
	{
		for(f = 2; f <= num; f++)
		{
			i = 0;
			while((num % f) == 0 )
			{
				num = num / f;
				i++;
			}
			if(num == 1)
			{
				if(i > 1)
				{
					printf("%d^%d\n", f, i);
				}
				else if(i ==1)
				{
					printf("%d\n", f);
				}
			}
			else
			{
				if(num == 1)
				{
					if(i > 1)
					{
						printf("%d^%d*\n", f, i);
					}
					else if(i == 1)
					{
						printf("%d *\n", f);
					}
				}				
			}
		}
	}
	return 0;
}