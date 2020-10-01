#include <iostream>

#define endl "\n"
using namespace std;

int n;
void solve(){
	for(int i=1; i<n; i++){
		if(i % 7 == 0)
			continue;
		else
			cout << i << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	//ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> n)
		solve();
	
	return 0;
}