#include <stdio.h>

int n, m, temp, l;

int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	while(scanf("%d %d", &n, &m)){
		int res;
		l=0;
			for(int i=n; i<m; i++){
				scanf("%d", &temp);
				l += temp;
				if(l >= m){
					res = i;
					break;
				}
		}
		printf("%d\n", res);
	}
	return 0;
}