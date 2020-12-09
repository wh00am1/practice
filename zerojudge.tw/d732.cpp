#include <iostream>
using namespace std;

int n, k, ar[100000], t;
int search(){
	int l=n-1, r=0;
	while(r <= l){
		int mid = (r+l)/2;
		if(ar[mid] == t)
			return mid+1;
		else if(ar[mid] < t)
			r = mid+1;
		else
			l = mid-1;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for(int i=0; i<n; i++)
		cin >> ar[i];
	while(k--){
		cin >> t;
		cout << search() << '\n';
	}
	return 0;
}