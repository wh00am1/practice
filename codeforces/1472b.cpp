#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a=0, b=0, s=0, i;
		while(n--){
			cin >> i;
			if(i&1)
				++a;
			else
				++b;
			s+=i;
		}
		if(s&1)
			cout << "NO" << endl;
		else if(!(b&1))
			cout << "YES" << endl;
		else if(a>2)
			cout << "YES" << endl;
		else if(a&&!(a&1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
