#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
const int mod=1e9+7;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n,x;
	cin >> n >> x;
	vector<int> a(n);
	vector<ll> dp(x+1);
	for(int i=0; i<n; ++i)
		cin >> a[i];
	dp[0]=1;
	for(int i=0; i<n; ++i)
		for(int j=1; j<=x; ++j)
			if(j-a[i]>=0)
				dp[j]=(dp[j]+dp[j-a[i]])%mod;
	cout << dp[x] << endl;
	return 0;
}
