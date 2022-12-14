#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    string s1, s2;
    cin >> s1 >> s2;
    ll n = s2.size();
    for(ll i=0; i<n; ++i){
        if(tolower(s1[i])>tolower(s2[i])){
            cout << 1;
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i])){
            cout << -1;
            break;
        }
        else if(i==n-1)
            cout << 0;
    }
    cout << endl[1];
	return 0;
}
