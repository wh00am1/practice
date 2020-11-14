#include <iostream>
using namespace std;
int n, li, ri;
char str[100][100];
void swap(char &a, char &b){
	char temp = a;
	a=b;
	b=temp;
}
void solve(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> str[i];
	}
	for(int i=0; i<n; i++){
		cin >> li >> ri;
		for(int j=li-1; j<ri-1; j++){
			swap(str[i][j], str[i][ri-j+li-2]);
		}
		if(i == n-1)
			cout << str[i] << ".";
		else
			cout << str[i] << " ";
	}
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

/**
qwertyuiop from 1 to 5
1   5

(ri-1)-(j-li+1)
=
ri-j+li-2
**/