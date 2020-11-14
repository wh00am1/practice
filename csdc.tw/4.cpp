#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
vector<int> v;
void solve(){
	int p=0, ct=0;
	for(int i=0; i<n; i++)
		v.push_back(n);
	while(ct != k-1){
		p+=m;
		p%=v.size();
		v.erase(v.begin()+p);
		ct+=1;
	}
	cout << (p+m)%v.size() << endl;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> n >> m >> k)
		solve();
	return 0;
}