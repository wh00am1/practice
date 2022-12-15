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
    int n, px, py, t;
    set<int> s;
    cin >> n;
    cin >> px;
    FOR(i, px){
        cin >> t;
        s.insert(t);
    }
    cin >> py;
    FOR(i, py){
        cin >> t;
        s.insert(t);
    }
    bool flag=1;
    FOR(i, n)
        if(s.find(i+1)==s.end()) flag=0;
    cout << (flag?"I become the guy.":"Oh, my keyboard!") << endl[1];
	return 0;
}
