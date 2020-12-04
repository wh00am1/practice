//pG AC
#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
#define EmiliaMyWife ios::sync_with_stdio(0); cin.tie(0);

struct frac {
    ll a, b;
    frac(ll x, ll y): a(x), b(y) {
        ll g = __gcd(a, b);
        a /= g;
        b /= g;
    }
    friend bool operator<(const frac &a, const frac &b) {
        return a.a * b.b < b.a * a.b;
    }
    friend ostream& operator<<(ostream &out, const frac &x) {
        cout << x.a << '/' << x.b;
        return out;
    }
};

int arr[501][501];

frac solve1(int n, int m) {
    frac res = frac(-1, 1);
    for(int i = 0; i < n; i++)
        for(int j = 1; j < m; j++)
            res = max(res, frac(arr[i][j] + arr[i][j - 1], 2));
    for(int i = 1; i < n; i++)
        for(int j = 0; j < m; j++)
            res = max(res, frac(arr[i][j] + arr[i - 1][j], 2));
    return res;
}
frac solve2(int n, int m) {
    frac res = frac(-1, 1);
    for(int i = 0; i < n; i++)
        for(int j = 2; j < m; j++)
            res = max(res, frac(arr[i][j] + arr[i][j - 1] + arr[i][j - 2], 3));
    for(int i = 2; i < n; i++)
        for(int j = 0; j < m; j++)
            res = max(res, frac(arr[i][j] + arr[i - 1][j] + arr[i - 2][j], 3));
    return res;
}

signed main() { //EmiliaMyWife
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> arr[i][j];
        cout << max(solve1(n, m), solve2(n, m)) << '\n';
    }
}