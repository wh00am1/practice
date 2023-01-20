#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
const int INF=0x3f3f3f3f;
const int mod=1e9+7;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n;	
	cin >> n;
	char c;
	vector<vector<int>> dp(n, vector<int>(n));
	dp[0][0]=1;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cin >> c;
			if(c=='*')
				dp[i][j]=0;
			else{
				if(i)
					dp[i][j]+=dp[i-1][j];
				if(j)
					dp[i][j]+=dp[i][j-1];
			}
			dp[i][j]%=mod;
		}
	}
	cout << dp[n-1][n-1]%mod << endl;
	return 0;
}
