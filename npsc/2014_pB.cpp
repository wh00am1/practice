// pB AC
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define YukinonMyWife   ios::sync_with_stdio(0); cin.tie(NULL);
#define size(v)         (long long)(v).size()
#define mem(whr, stf)   memset(whr, stf, sizeof(whr));
typedef int64_t   ll;
typedef uint64_t ull;
const double EPS   =        1e-8;
const  int   INF   =      0x3F3F3F3F;
const   ll   LINF  =  0x3F3F3F3F3F3F3F3F;
const  int   MOD   =      955049953;
const  int   dx[4] = {  1, -1,  0,  0  };
const  int   dy[4] = {  0,  0,  1, -1  };


#define int ll
#define endl '\n'
#define V vector
#define pb push_back
#define pii pair<int, int> 
#define x first
#define y second


int p[1005], r[1005];


signed main() {
  YukinonMyWife
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i] >> r[i];
    
    ull ans = r[0];
    int p_x = 1;
    bool falg = 0;
    for (int i = 0; i < n - 1; i++) {
      if (falg) break;

      p_x *= p[i];
      while (!(ans % p[i + 1] == r[i + 1])) {
        ans += p_x;
        if (ans >= MOD) falg = 1;
      }
    }
    if (falg) cout << -1 << endl;
    else cout << ans << endl;
  }
  return 0;
}