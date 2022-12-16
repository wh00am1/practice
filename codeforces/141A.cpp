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
	string s1, s2, s3;
	multiset<char> q, w;
	cin >> s1 >> s2 >> s3;
	EACH(c, s1) q.insert(c);
	EACH(c, s2) q.insert(c);
	EACH(c, s3) w.insert(c);
	cout << (q==w?"YES":"NO") << endl[1];
	return 0;
}
