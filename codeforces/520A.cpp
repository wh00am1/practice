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
    int n;
    string s;
    cin >> n >> s;
    if(n<26){
        cout << "NO" << endl[1];
        return 0;
    }
    set<int> s1;
    EACH(c, s) s1.insert(tolower(c));
    cout << (s1.size()==26?"YES":"NO") << endl[1];
	return 0;
}