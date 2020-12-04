// pD WA(TBD)
#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
using ell = __int128;
#define EmiliaMyWife ios::sync_with_stdio(0); cin.tie(0);

bool check(ll s, int l, ll x) {
    ell w = 1;
    for(int i = 0; i < l; i++) {
        if(w > x)
            return false;
        w *= (s + i);
    }
    //cout << s << ' ' << l << ' ' << x << ' ' << ll(w) << '\n';
    return w <= x;
}
ll solve(ll x) {
    ll res = 0, prv = 0;
    for(int i = 2; i <= 22; i++) {
        int l = 1, r = 1e9;
        while(l < r) {
            int m = l + r >> 1;
            if(check(m, i, x))
                l = m + 1;
            else
                r = m;
        }
        res += l - 1 - prv;
        prv = l > 2;
        //cout << res << ' ' << l << '\n';
    }
    return res;
}

signed main() { //EmiliaMyWife
    int t;
    scanf("%d", &t);
    while(t--) {
        ll l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", solve(r) - solve(l - 1));
    }
}