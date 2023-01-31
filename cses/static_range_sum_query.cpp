#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, q;
	cin >> n >> q;
	vector<ll> v(n), s(n);
	for(int i=0; i<n; ++i){
		cin >> v[i];
		s[i]=v[i];
		if(i)
			s[i]+=s[i-1];
	}
	int a, b;
	while(q--){
		cin >> a >> b;
		if(a==b)
			cout << v[a-1] << endl;
		else{
			a-=2; --b;
			if(a<0)
				cout << s[b] << endl;
			else
				cout << s[b]-s[a] << endl;
		}
	}
	return 0;
}
