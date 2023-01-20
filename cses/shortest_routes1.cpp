#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, m;
	cin >> n >> m;
	vector<vector<pair<ll, ll>>> adj(n);
	vector<ll> ans(n, -1);
	ll u, v, k;
	while(m--){
		cin >> u >> v >> k;
		--u;
		--v;
		adj[u].emplace_back(v, k);
	}
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
	for(int i=0; i<n; ++i){
		pq.emplace(0, 0);
		while(!pq.empty()){
			ll dis=pq.top().first, cur=pq.top().second;
			pq.pop();
			if(~ans[cur])
				continue;
			ans[cur]=dis;
			if(cur==i-1)
				break;
			for(pair<ll, ll> &edge : adj[cur])
				pq.emplace(edge.second+dis, edge.first);
		}
	}
	for(ll i : ans)
		cout << i << ' ';
	cout << endl;
	return 0;
}
