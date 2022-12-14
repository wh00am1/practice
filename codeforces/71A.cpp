#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() < 11)
            cout << s << endl[1];
        else
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl[1];
    }
    return 0;
}
