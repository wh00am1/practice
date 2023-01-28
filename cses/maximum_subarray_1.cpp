#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n;
	cin >> n;
	vector<ll> v(n);
	for(ll &i : v)
		cin >> i;
	ll ans=-1e18, s=-1e18;
	for(ll &i : v){
		s=max(s+i, i);
		ans=max(s, ans);
	}
	cout << ans << endl;
	return 0;
}
