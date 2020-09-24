#include <iostream>
#define endl "\n"

using namespace std;

int n, solve(int a);
int main(int argc, char const *argv[])
{
	cin >> n;
	int res = solve(n);
	cout << res << endl;
	return 0;
}

int solve(int a){
	if(a == 1)
		return 2;
	else if(a == 2)
		return 4;
	else
		return solve(a-1) + a;
}