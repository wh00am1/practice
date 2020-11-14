#include <iostream>
using namespace std;

int dp[101], sec;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[74] = 10, dp[75] = 11;
	while(cin >> sec){
		int idx=76;
		for(; idx<sec+1; idx++)
			dp[idx] = dp[idx-1]+dp[idx-2];
		cout << dp[sec] << endl;
	}
	return 0;
}