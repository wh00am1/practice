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
int main(int argc, char const *argv[]){
	AkagiMyWife();
	map<string, int> mp;
	mp["Tetrahedron"]=4; mp["Cube"]=6; mp["Octahedron"]=8; mp["Dodecahedron"]=12; mp["Icosahedron"]=20;
	int n, ans=0;
	cin >> n;
	string s;
	while(n--){
		cin >> s;
		ans+=mp[s];
	}
	cout << ans << endl[1];
	return 0;
}
