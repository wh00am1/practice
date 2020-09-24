#include <stdio.h>

int n, a[10000000]; 
void solve();
void sort();
int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	solve();
	return 0;
}

void solve(){
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort();
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}

void sort(){
	int temp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}