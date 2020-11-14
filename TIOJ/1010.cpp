#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string p, q;
void solve(){
	unsigned int lp = p.size(), lq = q.size(), res=0;
	for(unsigned int i=1, len=min(lp, lq); i<=len; i++){
		for(int j=i-1, w=lq-1; j>=-1; j--, w--){
			if(q[w] != p[j])
				break;
			if(j == -1)
				res = i;
		}
	}
	cout << res << endl;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> p >> q;
	return 0;
}