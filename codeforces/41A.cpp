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
	string s1, s2;
	cin >> s1 >> s2;
	bool flag=1;
	FOR(i, (int)s1.size())
		if(s1[i]!=s2[s2.size()-i-1]) flag=0;

	cout << (flag?"YES":"NO") << endl[1];
	return 0;
}
