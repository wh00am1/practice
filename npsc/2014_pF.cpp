// pF AC
#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
int n, m;
char drop, song;
struct mem
{
	int u;
	double val[3], sc;
}b[25];

bool compare(mem a, mem b){
	return a.sc>b.sc;
}
void solve(){
	cin >> n >> drop >> m;
	for(int i=0; i<n; i++){
		cin >> b[i].u >> drop;
		cin >> b[i].val[0] >> drop >> b[i].val[1] >> drop >> b[i].val[2];
		b[i].sc=0;
	}
	int idx;
	for(int i=0; i<m; i++){
		if(i)
			cin >> drop;
		cin >> song;
		if(song == 's')	idx=0;
		else if(song == 'p')	idx=1;
		else 	idx=2;
		for(int j=0; j<n; j++){
			b[j].sc+=b[j].val[idx];
		}	
	}
	sort(b, b+n, compare);
	double sum=0;
	set<int> res;
	set<int>::iterator it;
	for(int i=0; i<9; i++){
		res.insert(b[i].u);
		sum+=b[i].sc;
	}
	cout << fixed << setprecision(3) << sum / 9 << endl;
	it=res.begin(); cout << (*it) ;
	for(++it; it!=res.end(); ++it) cout << "," << (*it) ;
	cout << endl;

}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}