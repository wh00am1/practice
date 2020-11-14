#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	while(cin >> m >> n){
		if(m>n*8/3 && m<n*8/2)
			cout << "Yes" << endl;
		else if(m<n*8/3)
			cout << "Too much" << endl;
		else
			cout << "Not enough" << endl;
	}
	return 0;
}