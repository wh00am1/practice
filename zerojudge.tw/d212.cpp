#include <iostream>
using namespace std;
unsigned long long int dp[101];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	dp[0]=1, dp[1]=1;
	while(cin >> n){
		if(n<=1)
			cout << dp[n] << endl;
		else{
			for(int i=2; i<=n; i++)
				dp[i] = dp[i-1] + dp[i-2];
			cout << dp[n] << endl;
		}
	}	
	return 0;
}