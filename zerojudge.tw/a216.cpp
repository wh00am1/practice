#include <iostream>
#define endl "\n"
using namespace std;

int n;
long long int f(int x){
	return (x*(x+1))/2;
}

void solve(){
	cout << f(n) << " ";
	long long int ar[30000] = {0};
	ar[1] = 1;
	for(int i=1; i<=n; i++){
		ar[i] = f(i) + ar[i-1];
	}
	cout << ar[n] << endl;
}
int main(int argc, char const *argv[])
{
	cin.tie(0);
	while(cin >> n)
		solve();
	return 0;
}