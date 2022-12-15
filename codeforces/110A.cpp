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
	string s;
	cin >> s;
	int a=0;
	EACH(c, s){
		if(c=='4'||c=='7')
			a++;
	}
	cout << ((a==4||a==7)?"YES":"NO") << endl[1];	
	return 0;
}
