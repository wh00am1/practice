#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define ld long double
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
	int n, k, ans=0;
	cin >> n >> k;
	k=240-k;
	for(int i=1; i<n+1; ++i){
			int j=5*i*(i+1)/2;
			if(j>k) break;
			++ans;
	}
	cout << ans << '\n';
	return 0;
}
