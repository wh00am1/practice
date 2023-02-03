#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
const int INF=0x3f3f3f3f;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> dp(x+1, INF);
	dp[0]=0;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=1; i<=x; ++i)
		for(int j=0; j<n; ++j)
			if(i-a[j]>=0)
				dp[i]=min(dp[i], 1+dp[i-a[j]]);
	if(dp[x]^INF)
		cout << dp[x] << endl;
	else
		cout << -1 << endl;
	return 0;
}
