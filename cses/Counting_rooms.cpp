#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
vector<vector<char>> adj;
vector<vector<bool>> vis;
int n, m, ans=0;

void dfs(int u, int v){
	if(u>=n||v>=m||u<0||v<0||vis[u][v]||adj[u][v]!='.')
		return;
	vis[u][v]=1;
	dfs(u, v+1);
	dfs(u, v-1);
	dfs(u+1, v);
	dfs(u-1, v);
}
int main(int argc, char const *argv[]){
	AkagiMyWife
	cin >> n >> m;
	adj=vector<vector<char>>(n, vector<char>(m));
	vis=vector<vector<bool>>(n, vector<bool>(m));
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j)
			cin >> adj[i][j];
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			if(adj[i][j]=='.'&&!vis[i][j])
				dfs(i, j), ++ans;
		}
	}
	cout << ans << endl;
	return 0;
}
