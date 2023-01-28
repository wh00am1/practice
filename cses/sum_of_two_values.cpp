#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, s;
	cin >> n >> s;
	vector<int> v(n), ans;
	map<int, int> mp;
	for(int &i : v)
		cin >> i;
	for(int i=0; i<n; ++i){
		if(mp.find(s-v[i])!=mp.end()){
			ans.emplace_back(mp[s-v[i]]+1);
			ans.emplace_back(i+1);
		}
		mp[v[i]]=i;
	}
	if(ans.size()<2)
		cout << "IMPOSSIBLE";
	else
		for(int i : ans)
			cout << i << ' ';
	cout << endl;
	return 0;
}
