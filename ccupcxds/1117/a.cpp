#include <bits/stdc++.h>
using namespace std;
stack<char> s;
char cs[6] = {'(', ')', '{', '}', '[', ']'}, c;
int n, idx;
int main(){
	bool flag=0;
	cin >> n;
	while(n--){
		cin >> c;
		if(c==cs[0] || c==cs[2] || c==cs[4])
			s.push(c);
		else{
			if(c==cs[1]) idx=1;
			else if(c==cs[3]) idx=3;
			else idx=5;
			if(!s.empty()){
				if(s.top() == cs[idx-1])
					s.pop();
			}
			else
				flag=1;
		}
	}
	if(!s.empty()) flag=1;
	if(!flag)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
