#include <iostream>
#include <algorithm>
using namespace std;

int ar[1000000], n;
void bs(){
	int temp, mid, r, l;
	for(int i=0; i<n; i++){
		temp=ar[i], l=0, r=i-1; mid=0;
		while(l <= r){
			mid = (l+r)/2;
			if(temp < ar[mid])
				r = mid-1;
			else
				l = mid+1;
		}
		for(int j=i-1; j>=l; j--)
			ar[j+1]=ar[j];
		if(l != i)
			ar[l]=temp;
	}
	return;
}
void solve(){
	for(int i=0; i<n; i++)
		cin >> ar[i];
	sort(ar, ar+n);
	for(int i=0; i<n; i++)
		cout << ar[i] << " ";
	cout << endl;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> n)
		solve();
	return 0;
}

