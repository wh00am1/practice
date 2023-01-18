#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n;
	cin >> n;
	vector<int> v(n), d(n, 1);
	int ans=1;
	for(int &u : v)
		cin >> u;
	for(int i=1; i<v.size(); ++i){
		if(v[i]>v[i-1]){
			d[i]+=d[i-1];
			ans=max(ans, d[i]);
		}
	}
	cout << ans << endl;
	return 0;
}
