#include <iostream>
#define endl "\n"
using namespace std;

int n, m, l, r, ar[100000], dp[1000001] = {0};
void solve(){
	for(int i=1; i<=n; i++){
		cin >> ar[i];
		dp[i] = ar[i];
		dp[i] += dp[i-1];
	}
	while(m--){
		int res=0;
		cin >> l >> r;
		res = dp[r] - dp[l-1];
		cout << res << endl;
	}
}
int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> n >> m){
		solve();
	}
	return 0;
}

// 1 2 3 4 5 
// 2~4 = 1~4 - 1