#include <iostream>

using namespace std;

void solve();
int p[4], n, input[4], a, b;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> p[0] >> p[1] >> p[2] >> p[3]){
		while(cin >> n){
			while(n--){
				a =0;
				b =0;
				solve();
			}
		}
	}
	return 0;
}

void solve(){

	for(int i=0; i < 4; i++)
		cin >> input[i];
	for(int i=0; i<4; i++){
		if(input[i] == p[i])
			a++;
		for(int j=0; j<4; j++){
			if(input[i] == p[j])
				b++;
			else
				continue;
		}
	}
	cout << a << "A" << b << "B" << endl;
}