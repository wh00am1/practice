#include <iostream>
using namespace std;

int l[3], nums[5], money[5], i;
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
	int res=0;
	for(int x=0; x<3; x++)
		cin >> l[x];
	for(int x=0; x<5; x++)
		cin >> nums[x];
	for(int x=0; x<5; x++)
		cin >> money[x];
	for(int x=0; x<3; x++){
		for(int j=0; j<5; j++){
			if(l[x] == nums[j]){
				if(x ==2)
					res -= money[j];
				else
					res += money[j];

			}
		}
	}
	if(res < 0)
		res =0;
	cout << res << endl;
}