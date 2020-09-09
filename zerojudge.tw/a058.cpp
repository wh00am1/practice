#include <iostream>

using namespace std;

int i, a, b, c;
void solve();

int main(int argc, char const *argv[])
{
	int n;
	while(cin >> n){
		while(n--){
			cin >> i;
			solve();
		}
		cout << a << " " <<  b << " " << c <<endl;
	}
	return 0;
}

void solve(){
	if(i % 3 == 0)
		a++;
	else if(i % 3 == 1)
		b++;
	else if(i % 3 == 2)
		c++;
}