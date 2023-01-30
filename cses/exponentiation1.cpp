#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

const int mod=1e9+7;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int t;
	cin >> t;
	while(t--){
		ll a, b, ans=1;
		cin >> a >> b;
		while(b){
			if(b&1)
				ans=ans*a%mod;
			b=b>>1;
			a=a*a%mod;	
		}
		cout << ans << endl;
	}
	return 0;
}
