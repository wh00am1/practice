#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, s, e;
	bool ar[1000]={0};
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> s >> e;
		for(int j=s; j<e; j++)
			ar[i]=1;
	} 
	for(int i=0; i<n; i++){
		if(ar[i] == 0){
			int cnt=1, x=i;
			while(ar[x+1] == 0 && x+1<n){
				cnt++, x++;
				ar[i]=1;
			}
			cout << x << " " << x+cnt << endl;
		}
	}
	return 0;
}