#include <iostream>
using namespace std;

int t, n, a, b;
int max(int &a, int &b){
	if(a>b)	return a;
	return b;
}
void solve(){
	int dp=-10000;
	while(t--){
		cin >> n;
		a=0;
		for(int i=0; i<n; i++){
			cin >> b;
			a+=b;
			dp=max(dp, a);
			if(a<0)
				a=0;

		}
		cout << dp << endl;
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	solve();
	return 0;
}