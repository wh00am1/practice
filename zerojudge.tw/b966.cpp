#include <iostream>
#define endl "\n"

using namespace std;

int n, i, j;
unsigned long long res;
bool a[10000000] = {0};
void solve(){
	/**
	for(int x=0; x<10000000; x++)
		a[x] = 0;
		**/
	while(n--){
		cin >> i >> j;
		for(int x=i; x<j; x++)
			a[x] = true;
	}
	for(int x=0; x<10000000; x++){
		if(a[x])
			res++;
	}

	cout << res << endl;

}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	solve();
	return 0;
}