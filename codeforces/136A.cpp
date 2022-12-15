#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define ld long double
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
#define FOR(a, b) for(int (a)=0; (a)<(b); (a)+=1)
#define EACH(u, v) for(auto& u : v)

using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ 
	AkagiMyWife
	int n, a;
	cin >> n;
	set<pair<int, int>> s;
	for(int i=1; i<=n; ++i){
		cin >> a;
		s.insert(make_pair(a, i));
	}
	EACH(p, s)
		cout << p.second << endl[p==*s.end()];
	return 0;
}
