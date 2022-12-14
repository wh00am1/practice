#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define endl " \n"
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int INF = 0x3f3f3f3f;

int main(int argc, char const *argv[]){ AkagiMyWife
    int t, a=0, b=0;
    for(int i=1; i<6; ++i){
        for(int j=1; j<6; ++j){
            cin >> t;
            if(t==1){
                a=i; 
                b=j;
            }
        }
    }

    cout << abs(a-3)+abs(b-3)  << endl;
	return 0;
}
