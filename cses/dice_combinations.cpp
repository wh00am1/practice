#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

vector<ll> dp(1000000);
const int mod=1e9+7;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n;
	cin >> n;
	dp[0]=1;
	for(int i=1; i<6; ++i){
		dp[i]=1;
		for(int j=0; j<i; ++j)
			dp[i]+=dp[j];
	}
	if(n<=6)
		cout << dp[n-1] << endl;
	else{
		for(int i=6; i<n; ++i){
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
			dp[i]%=mod;
		}
		cout << dp[n-1] << endl;
	}
	return 0;
}
