#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
	cin >> n;
	vector<int> v(n, 0);
	int idx=0;
	for(int i=1; i<=n; ++i){
		int cnt=0;
		while(cnt<2){
			++idx;
			idx%=n;
			if(!v[idx])
				++cnt;
		}
		v[idx]=1;
		//idx = (idx+2)%n;
		if(idx)
			cout << idx << ' ';
		else
			cout << n << ' ';
	}
	return 0;
}
