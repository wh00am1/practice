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
    vector<string> v1={"I hate it", "I love it"}, v2={"I hate that", "I love that"};
    cin >> n;
    if(n^1){
        FOR(i, n){
            if(i^(n-1))
                cout << v2[i%2] << ' ';
            else
                cout << v1[i%2] << ' ';
        }
    }
    else cout << v1[0];
    cout << endl[1];
	return 0;
}
