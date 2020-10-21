#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int n, c, t;
stack<int> s;
void solve(){
	while(n--){
		cin >> c;
		switch(c){
			case 1:	s.pop();	break;
			case 2:	cout << s.top() << endl;	break;
			case 3:	cin >> t;	s.push(t);
		}
	}
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> n)
		solve();
	return 0;
}