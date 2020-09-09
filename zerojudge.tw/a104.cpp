#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	int n, a[10000];
	while(cin >> n){
		for(int i =0; i <n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i <n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}