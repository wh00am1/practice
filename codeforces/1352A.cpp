#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
int a[4]={10000, 1000, 100, 10};
void solve(){
	int n;
	cin >> n;
	vector<int> ans;
	for(int i=0; i<4; ++i){
		if(n>a[i]){
			ans.emplace_back((n/a[i])*a[i]);
			n-=(n/a[i])*a[i];
		}
	}
	if(n>0)
		ans.emplace_back(n);

	cout << ans.size() << endl;
	for(int i : ans)
		cout << i << endl;
}
int main(int argc, char const *argv[]){
	AkagiMyWife
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
