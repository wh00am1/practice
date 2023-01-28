#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

const ll INF=-1e18;
stack<int> s;
vector<bool> vis;
vector<vector<pair<ll, ll>>> adj;
void topo(int u){
	vis[u]=1;
	for(pair<int, int> edge : adj[u])
		if(!vis[edge.first])
			topo(edge.first);
	s.push(u);
}
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, m;
	cin >> n >> m;
	adj=vector<vector<pair<ll, ll>>>(n);
	vis=vector<bool>(n);
	int a, b;
	while(m--){
		cin >> a >> b;
		--a; --b;
		adj[a].emplace_back(b, 1);
	}
	vector<ll> d(n, INF), prev(n, -1), ans;
	for(int i=0; i<n; ++i)
		if(!vis[i])
			topo(i);
	d[0]=0;
	while(!s.empty()){
		int u=s.top();
		s.pop();
		if(d[u]^INF)
			for(pair<ll, ll> edge : adj[u])
				if(d[edge.first]<d[u]+edge.second){
					d[edge.first]=d[u]+edge.second;
					prev[edge.first]=u;
				}
	}
	int t=--n;
	if(d[n]^INF){
		ans.emplace_back(t);
		while(t){
			t=prev[t];
			ans.emplace_back(t);
		}
	}
	if(ans.size()<2)
		cout << "IMPOSSIBLE" << endl;
	else{
		reverse(ans.begin(), ans.end());
		cout << ans.size() << endl;
		for(int i : ans)
			cout << i+1 << ' ';
		cout << endl;
	}
	return 0;
}
