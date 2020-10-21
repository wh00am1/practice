#include <iostream>
#include <algorithm>
using namespace std;

int n, ar[100];
void solve(){
	for(int i=0; i<n; i++)
		cin >> ar[i];
	sort(ar, ar+n);
	cout << ar[0] << " " << ar[n-1] << " ";
	if(n-1 == ar[n-1]-ar[0])
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}	
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> n)
		solve();
	return 0;
}