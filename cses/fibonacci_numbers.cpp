#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

const ll mod=1e9+7;
struct mat{
	vector<vector<ll>> v=vector<vector<ll>>(2, vector<ll>(2, 0));
	friend mat operator*(const mat &a, const mat &b){
		mat res;
		for(int i=0; i<2; ++i)
			for(int j=0; j<2; ++j)
				for(int k=0; k<2; ++k){
					res.v[i][j]+=a.v[i][k]*b.v[k][j];
					res.v[i][j]%=mod;
				}
		return res;
	}
};
int main(int argc, char const *argv[]){
	ll n;
	cin >> n;
	mat ans, m;
	ans.v={{1, 0}, {0, 0}};
	m.v={{1, 1}, {1, 0}};
	if(n<2){
		cout << n << endl;
		return 0;
	}
	while(n){
		if(n&1)
			ans=m*ans;
		n=n>>1;
		m=m*m;
	}
	cout << ans.v[1][0] << endl;
	return 0;
}
