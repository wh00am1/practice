#include <iostream>
#define endl "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	while(cin >> n >> m){
		int l=0, t=0;
		while(t <= m){
			t += n+l;
			l++;
		}
		if(l == 0)
			l=1;
		cout << l << endl;
	}
	return 0;
}