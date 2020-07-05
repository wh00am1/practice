#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i =0, in;
	int out[100000];
	while(scanf("%d", &in)){
		out[i] = in % 2;
		i = i + 1;
		in = in / 2;
	}
	for(; i > 0; i--){
		printf("%d\n", out[i]);
		printf("\n");
	}
	return 0;
}