#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int ar[13] = {7, 0, 9, 2, 5, 16, 87, 93, 56, 78, 22, 56, 7}, n=13, target;
int binary_search(){
	int l=n-1, r=0;
	while(r <= l){
		int mid = (r+l)/2;
		if(ar[mid] == target)
			return 1;
		else if(ar[mid] < target)
			r = mid+1;
		else
			l = mid-1;
	}
	return -1;
}

void binary_sort(){
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

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	binary_sort();
	cout << "The Array: "; 
	for(int i=0; i<n; i++){
		cout << ar[i] << " ";
	}	
	cout << endl << endl;;
	cout << "What do you want to find? " << endl;
	cin >> target;
	int i = binary_search();
	if(i == -1)
		cout << endl << "Not in this array" << endl;
	else
		cout << "Found number : " << target << endl;
	return 0;
}