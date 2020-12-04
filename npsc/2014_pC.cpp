//pC AC
#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
#define EmiliaMyWife ios::sync_with_stdio(0); cin.tie(0);

const int N = 2e5 + 25;
int arr[N];
vector<int> son[N];

signed main() { //EmiliaMyWife
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        memset(arr, 0, sizeof arr);
        for(int i = 0; i < N; i++)
            son[i].clear();
        for(int i = 1, a; i < n; i++)
            scanf("%d", &a), son[a].push_back(i);
        const function<int(int)> dfs = [&](int u) {
            int l = 0, r = 0;
            for(int v : son[u]) {
                if(!l)
                    l = dfs(v);
                else
                    r = dfs(v);
            }
            //cout << u << ' ' << l << ' ' << r << '\n';
            arr[min(l, r)]++;
            return max(l, r) + 1;
        };
        dfs(0);
        int cur = n;
        for(int i = 0; i <= n; i++) {
            cur -= arr[i];
            printf("%d", cur);
            if(!cur)
                break;
            putchar(' ');
        }
        putchar('\n');
    }
}