#include <iostream>
#define endl "\n"

using namespace std;

int n, solve(), dp[1000000], res, i=1;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	solve();
	return 0;
}

int solve(){
	dp[0] = 1;
	if(n == 0){
		cout << dp[0] << endl;
		return 0;
	}
	for(; i<=n; i++){
		dp[i] = dp[i-1] + i;
		res = dp[i];
	}
	cout << res << endl;
	return 0;
}
