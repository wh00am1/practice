#include <iostream>
#include <iomanip>
#define endl "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	cin.tie(0);
	float a, b, c, p, d, q;
	while(cin >> a >> b >> p >> c >> d >> q){
		float x=(p*d-b*q)/(a*d-b*c), y=(p*c-a*q)/(b*c-a*d);
		cout << setprecision(3) << x << " " << setprecision(3) << y << endl;
	}
	return 0;
}

/**
ax+by=p
cx+dy=q

x=(pd-bq)/(ad-bc)

y=(pc-aq)/(bc-ad)

**/