#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

int score[20], i;
void solve(){
	for(int a=0; a<i; a++)
		cin >> score[a];
	sort(score, score+i);
	for(int a=0; a<i; a++)
		cout << score[a] << " ";
	cout << endl;

	if(score[0] > 60)
		cout << "best case" << endl << score[0] << endl;
	else if(score[i-1] < 60)
		cout << score[i-1] << endl << "worst case" << endl;
	else{
		for(int a=i-1; a>=0; a--)
			if(score[a] < 60){
				cout << score[a] << endl;
				break;
			}
		for(int a=0; a<i; a++){
			if(score[a] >= 60){
				cout << score[a] << endl;
				break;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> i)
		solve();
	return 0;
}