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
    int n, mx=0, mi=INF, ans=0;
    cin >> n;
    vector<int> v(n);
    EACH(u, v){ 
        cin >> u;
        mx=max(u, mx);
        mi=min(u, mi);
    }
    //cout << mx << ' ' << mi << endl;
    FOR(i, v.size()){
        if(v[i]==mx){
            bool flag=1;
            for(int j=0; j<i&&flag; ++j){
                swap(v[i-j], v[i-j-1]);
                ++ans;
                if(*v.begin()==mx) flag=0;
            }
            break;
        }
    }
    for(int i=v.size()-1; i>0; --i){
        if(v[i]==mi){
            bool flag=1;
            for(int j=i; j+1<(int)v.size()&&flag; ++j){
                swap(v[j], v[j+1]);
                ++ans;
                if(*v.end()==mi) flag=0;
            }
            break;
        }
    }
    cout << ans << endl[1];
	return 0;
}
