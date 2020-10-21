#include <stdio.h>

int n, ar[100], sort[101]={0};
void solve(){
	for(int i=0; i<n; i++){
		scanf("%d", &ar[i]);
		sort[ar[i]] += 1;
	}
	for(int i=0; i<100; i++){
		if(sort[i] != 0){
			for(int i=0; i<sort[i]; i++){
				printf("%d ", i);
			}
		}
	}
	printf("\n");
	
}
int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	solve();
	return 0;
}