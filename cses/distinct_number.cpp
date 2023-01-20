#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define AkagiMyWife ios_base::sync_with_stdio(0); cin.tie(0);

int main(int argc, char const *argv[]){
	AkagiMyWife
	int n, a;
	cin >> n;
	set<int> s;
	for(int i=0; i<n; ++i){
		cin >> a;
		s.insert(a);
	}
	cout << s.size() << endl;
	return 0;
}
