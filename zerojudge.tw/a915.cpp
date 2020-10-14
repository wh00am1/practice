#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

int n, t, p;
void solve(){
	pair<int, int> arr[1000];
	for(int i=0; i<n; i++){
		cin >> t >> p;
		arr[i] = make_pair(t, p);
	} 
	sort(arr, arr+n);
	for(int i=0; i<n; i++)
		cout << arr[i].first << " " << arr[i].second << endl;
}
int main(int argc, char const *argv[])
{
	cin.tie(0);
	
	while(cin >> n)
		solve();
	return 0;
}