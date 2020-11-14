#include <iostream>
#include <cmath>
using namespace std;

int power(int d){
	return d*d;
}
void solve(){
	int cnt=0, ax, ay, al, r, n, sx, sy, sl;
	cin >> ax >> ay >> al >> r >> n;
	r=power(r);
	for(int i=0; i<n; i++){
		cin >> sx >> sy >> sl;
		if(power(ax-sx)+power(ay-sy) < r && al>sl)
			cnt++;
	}
	cout << cnt << endl;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}