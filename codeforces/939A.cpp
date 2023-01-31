#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);
int main(int argc, char const *argv[]){
	AkagiMyWife
	int n;
	cin >> n;
	vector<int> a(n, -1);
	bool ans=0;
	int t;
	for(int i=0; i<n; ++i){
		cin >> t;
		a[i]=--t;
		if(a[a[a[i]]]==i)
			ans=1;
	}
	cout << (ans?"YES":"NO") << endl;
	return 0;
}
