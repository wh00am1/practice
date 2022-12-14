#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int a[1000000];
int main(int argc, char const *argv[]){ AkagiMyWife
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ++i)   a[i]=1;
    for(int i=0; i<s.size(); ++i){
        if(i && s[i]==s[i-1])
            a[i]+=a[i-1];
    }
    int ans=a[0];
    for(int i=0; i<s.size(); ++i){
        if(a[i]>ans)
            ans=a[i];
    }
    cout << ans << endl[1];
	return 0;
}
