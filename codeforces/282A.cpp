#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    int n, ans=0;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s=="X++" || s=="++X")    ++ans;
        if(s=="X--" || s=="--X")    --ans;
    }
    cout << ans << endl;
	return 0;
}
