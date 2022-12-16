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
	int n, t, s1=0, s2=0;
	cin >> n;
	while(n--){
		cin >> t;
		if(t==-1){
			if(s2) --s2;
			else ++s1;
		}
		else s2+=t;
	}
	cout << s1 << endl[1];
	return 0;
}
