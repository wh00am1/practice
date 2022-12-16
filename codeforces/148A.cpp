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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int s=0;
    FOR(i, d){
        int j=i+1;
        if(j%k&&j%l&&j%m&&j%n)
            ++s;
    }
    cout << d-s << endl[1];
	return 0;
}
