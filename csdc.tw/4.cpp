#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, k;
	vector<int> people;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=0; i<n; i++)
		people.push_back(i);
	int ct=0;
	for(int i=0; i<k-1; i++){
		ct = (ct+m-1) % people.size();
		people.erase(people.begin()+ct);
	}
	ct = (ct+m-1) % people.size();
	printf("%d\n", people[ct]);
	return 0;
}