#include <iostream>

using namespace std;

int a, b, res;
void solve();
int main(int argc, char const *argv[])
{
	int T;
	while(cin >> T){
		int c =1;
		while(T--){
			res = 0;
			cin >> a >> b;
			solve();
			cout << "Case " << c << ": " << res << endl;
			c++;
		}
	}
	return 0;
}

void solve(){
	int t;
	for(int i =1; i < 31; i++){
		t = i * i;
		if(t > b)
			break;
		if(t >= a && t <= b)
			res += t;
	}	
}