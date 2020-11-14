#include <iostream>
#include <algorithm>
using namespace std;

typedef struct st{
	int s;
	int e;
}plant;
plant pts[10001];
int m, t, dp[10001];

bool compare(plant x, plant y){
	return x.s < y.s;
}

void solve(){
	for(int i=0; i<t; i++){
		cin >> pts[i].s >> pts[i].e;
	}
	sort(pts, pts+t, compare);
	for(int i=0; i<t; i++){
		int d=pts[i].e - pts[i].s;
		int l=dp[pts[i].s]+d;
		for(int j=pts[i].e; j<m+1; j++){
			if(l < dp[j])	break;
			else	dp[j] = l;
		}
	}
	cout << dp[m] << endl;

}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> t;
	solve();
	return 0;
}