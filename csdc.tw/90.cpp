#include <iostream>
#include <algorithm>
using namespace std;

int n, m, c[200000];
bool vis[200000];

int proc(int &num1, int &num2){
	int ret=num1-num2;
	return ret>=0 ? ret:-ret;
}

int func(int &d){
	int l=n-1, r=0, res=0;
	while(r <= l){
		int mid = (r+l)/2;
		int p=proc(c[mid], d);
		vis[mid] = true;
		if(p%m == 0){
			if(!vis[mid]){
				res+=1;
			}
			break;
		}
		else if(p/m < 1)
			r = mid+1;
		else
			l = mid-1;
	}
	return res;
}

void solve(){
	int res=0;
	for(int i=0; i<n; i++){
		cin >> c[i];
	}
	sort(c, c+n);
	for(int i=0; i<n; i++){
		res+=func(c[i]);
	}
	cout << res << endl;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	solve();
	return 0;
}