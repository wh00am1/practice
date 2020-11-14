#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if(n % 4 == 0){
		cout << "4" << endl;
		return 0;
	}
	cout << n%4 << endl;
	return 0;
}