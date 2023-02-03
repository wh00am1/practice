#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	string s1, s2;
	cin >> s1 >> s2;
	int n=s1.size(), m=s2.size();
	vector<vector<int>> dp(n+1, vector<int>(m+1));
	for(int i=1; i<=n; ++i)
		dp[i][0]=i;
	for(int i=1; i<=m; ++i)
		dp[0][i]=i;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j){
			if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
		}
	cout << dp[n][m] << endl;
	return 0;
}
