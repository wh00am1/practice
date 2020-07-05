#include <iostream>
#include <functional>

using namespace std;
using std::function;

int main(int argc, char const *argv[])
{
	long a, b, c;
	function<long()> f[] = {[&]{return b + c;}, [&]{return b - c;}, [&]{return b * c;}, [&]{return b / c;}};
	while(scanf("%d %d %d", &a, &b, &c)){
		printf("%d\n", f[a -1]());
	}
	return 0;
}