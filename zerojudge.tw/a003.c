#include <stdio.h>

int main()
{
	int m;
	int d;
	int s;
	while(scanf("%d %d", &m, &d) != EOF)
	{
		s = 0;
		s = (m*2 + d) % 3;
         
         if(s == 0)
            printf("普通\n");
         
         else if(s == 1)
            printf("吉\n");
         
         else if(s == 2)
            printf("大吉\n"); 
	}
	return 0;
}