#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
const ll INF=1e18;
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<ll>> adj(n+1, vector<ll>(n+1, INF));
	ll a, b ,c;
	while(m--){
		cin >> a >> b >> c;
		adj[a][b]=adj[b][a]=min(adj[a][b], c);
	}
	for(int i=1; i<=n; ++i)
		adj[i][i]=0;
	for(int k=1; k<=n; ++k){
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j)
				adj[i][j]=adj[j][i]=min(adj[i][j], adj[i][k]+adj[k][j]);
		}
	}
	while(q--){
		cin >> a >> b;
		if(adj[a][b]>=INF)
			cout << -1 << endl;
		else
			cout << adj[a][b] << endl;
	}
	return 0;
}
