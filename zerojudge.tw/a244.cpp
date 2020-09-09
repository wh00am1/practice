#include <iostream>
#include <functional>

using namespace std;
using std::function;
int N;
long a, b, c;

void solve(){
	function<long()> f[] = {[&]{return b + c;}, [&]{return b - c;}, [&]{return b * c;}, [&]{return b / c;}};
	cin >> a >> b >> c;
	cout << f[a-1]() << endl;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> N){
		while(N--){
			solve();
		}
	}
	return 0;
}