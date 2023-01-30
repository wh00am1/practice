#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

const int mx=1000001;
vector<int> spf(mx);
int main(int argc, char const *argv[]){
	AkagiMyWife
	for(int i=1; i<mx; ++i)
		spf[i]=i;
	for(int i=2; i*i<mx; ++i)
		if(spf[i]==i)
			for(int j=i*i; j<mx; j+=i)
				if(spf[j]==j)
					spf[j]=i;
	int n;
	cin >> n;
	while(n--){
		int x, ans=1;
		cin >> x;
		while(x^1){
			int d=spf[x], s=1;
			while(!(x%d)){
				++s;
				x/=d;
			}
			ans*=s;
		}
		cout << ans << endl;
	}
	return 0;
}
