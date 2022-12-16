#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define ld long double
#define endl " \n"
#define FOR(a, b) for(ll (a)=0; (a)<(ll)(b); ++(a))
#define EACH(u, v) for(auto& u : v)

using namespace std;

const int INF = 0x3f3f3f3f;

void AkagiMyWife(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}
void solve(){
	int n;
	cin >> n;
	if(n<3){
		cout << 0 << endl[1];
		return;
	}
	if(n&1) cout << (n-1)/2 << endl[1];
	else cout << (n/2)-1 << endl[1];
}
int main(int argc, char const *argv[]){
	AkagiMyWife();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
