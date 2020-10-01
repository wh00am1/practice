#include <iostream>

#define endl "\n"
using namespace std;

int a, b, c;
void solve(){
	cin >> a >> b >> c;
	bool flag = true;
	if(a >= 1) a=1;
	if(b >= 1) b=1;
	if(c >= 1) c=1;

	if((a && b) == c){
		flag = false;
		cout << "AND" << endl;
	}
	if((a || b) == c){
		flag = false;
		cout << "OR" << endl;
	}
	if((a != b) == c){
		flag = false;
		cout << "XOR" << endl;
	}
	if(flag)
		cout << "IMPOSSIBLE" << endl;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	solve();
	return 0;
}