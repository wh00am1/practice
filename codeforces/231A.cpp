#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    int n, a, ans=0;
    cin >> n;
    while(n--){
        int b=0;
        for(int i=0; i<3; ++i){
            cin >> a;
            b+=a;
        }
        if(b>1) ans++;
    }
    cout << ans << endl[1];
	return 0;
}
