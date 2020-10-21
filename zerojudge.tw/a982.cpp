#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int n, x=2, y=2, a[100][100];
int movx[4] = {1, 0 , -1, 0}, movy[4] = {0, 1, 0, -1};
char m[100][100];

int bfs(){
	typedef pair<int, int> mypair;
	queue<mypair> e;
	memset(a, INT_MAX>>2, sizeof(a));
	e.push(make_pair(x, y));
	a[x][y] =0;

	while(e.size() > 0){
		pair<int, int> pt = e.front();
		e.pop();
		if(pt.first == n-1 && pt.second == n-1)
			break;

		for(int i=0; i<4; i++){ //attempt to find x, y (fx, fy)
			int fx=pt.first+movx[i], fy=pt.second+movy[i];
			if(0<=fx&&fx<100&&0<=fy&&fy<100&&&m[fx][fy]!="#"&&a[fx][fy]==INT_MAX>>2){
				e.push(make_pair(fx, fy));
				a[fx][fy] = a[pt.first][pt.second]+1;
			}
		}
	}
	return a[n-1][n-1];
}
void solve(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
			cin >> m[i][j];
	}

	int res = bfs();
	cout << res << endl;

}

int main(int argc, char const *argv[])
{
	cin.tie(0);
	while(cin >> n)
		solve();

	return 0;
}