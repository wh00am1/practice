#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
const int mod=1e9+7;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<ll> dp(x+1);
	dp[0]=1;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=1; i<=x; ++i)
		for(int j=0; j<n; ++j)
			if(i-a[j]>=0)
				dp[i]=(dp[i]+dp[i-a[j]])%mod;
	cout << dp[x] << endl;
	return 0;
}
