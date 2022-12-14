#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;
int n, k;
int main(int argc, char const *argv[]){ AkagiMyWife
    cin >> n >> k;
    vector<int> v;
    int t;
    for(int i=0; i<n; ++i){
        cin >> t;
        v.push_back(t);
    }
    int ans=0;
    for(int& i:v)
        if(i>0 && i>=v[k-1])   ++ans;
    cout << ans << endl;
	return 0;
}
