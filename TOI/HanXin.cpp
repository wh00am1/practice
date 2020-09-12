#include <iostream>

using namespace std;

int a[6], res;
void solve();
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(1){
		solve();
	}
	return 0;
}

void solve(){
	res =0;
	for(int i=0; i<6; i+=2)
		cin >> a[i] >> a[i+1];
	while(1){
		res++;
		if(res %a[0] == a[1] && res % a[2] == a[3] && res % a[4] == a[5]){
			cout << res << endl;
			break;
		}
		else
			continue;
	}
}