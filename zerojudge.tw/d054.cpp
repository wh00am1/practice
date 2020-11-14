#include <iostream>
using namespace std;

unsigned long long int dp[50];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[0]=1, dp[1]=5, dp[2] = 11; //1x1, 2x2 and 3x3 square
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n<=3)	goto fini;
		for(int i=3; i<n; i++)
			dp[i] = dp[i-1] + 4*dp[i-2] + 2*dp[i-3];
		fini:cout << dp[n-1] << endl;
	}
	return 0;
}