#include <iostream>

#define endl "\n"
using namespace std;
int a, b;
int solve(int a, int b){
	while(b != 0){
		int t=a%b;
		a=b, b=t;
	}
	return a;
}

int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> a >> b){
		int res = solve(a, b);
		cout << res << endl;
	}
	return 0;
}