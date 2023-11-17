#include <bits/stdc++.h>
using namespace std;
#define int long long
int t, n, v;

void solve(){
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	while(n--){
		cin >> v;
		pq.emplace(v);
	}
	int ans=0;
	while(pq.size()>1){
		int x=pq.top();
		pq.pop();
		int y=pq.top();
		pq.pop();
		ans+=x+y;
		pq.emplace(x+y);
	}
	cout << ans << '\n';
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while(t--)
		solve();
	return 0;
}
