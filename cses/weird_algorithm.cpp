#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    ll n;
    cin >> n;
    cout << n << endl[0];
    while(n!=1){
        if(n&1) n=3*n+1;
        else    n/=2;
        cout << n << endl[n==1];
    }
	return 0;
}
