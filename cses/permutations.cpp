#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

//bool vis[1000000];
int main(int argc, char const *argv[]){ AkagiMyWife
    int a;
    cin >> a;
    //memset(vis, 0x0, sizeof(vis));
    //vector<int> ans;
    //int cnt=0, d[2]={-3, 2};
    if(a==1)
        cout << 1;
    else if(a<=3)
        cout << "NO SOLUTION";
    else if(a==4)
        cout << "2 4 1 3";
    else{
        for(int i=1; i<a+1; i+=2)
            cout << i << ' ';
        for(int i=2; i<a+1; i+=2)
            cout << i << ' ';
    }
	return 0;
}
