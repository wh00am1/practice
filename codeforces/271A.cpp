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
	int n, i[2]={1, 0};
	cin >> n; ++n;
	bool flag=0;
	while(!flag){
		array<int, 10> a={};
		EACH(c, to_string(n))
			++a[c-'0'];
		FOR(j, 10){
			if(a[j]>1) break;
			else if(j==9) flag=1;
		}
		n+=i[flag];
	}	
	cout << n << endl[1];
	return 0;
}
