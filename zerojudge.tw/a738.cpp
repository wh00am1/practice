#include <iostream>

#define endl "\n"
using namespace std;
int a, b;
int solve(int a, int b){
	for(int i=a; i>1; i--){
		if(a % i == 0 && b % i == 0)
			return i;
	}
}

int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	while(cin >> a >> b){
		int res = solve(a, b);
		cout << res << endl;
	}
	return 0;
}