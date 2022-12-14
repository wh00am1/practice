#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    ll n, s1=0, s2;
    cin >> n;
    for(int i=0; i<n-1; ++i){
        cin >> s2;
        s1+=s2;
    }
    cout << n*(n+1)/2 - s1 << endl[1];
	return 0;
}
