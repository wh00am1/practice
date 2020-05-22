#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

// ord('*') - ord('1') = -7

int main(int argc, char **argv)
{
	char input[1000];
	while (scanf("%s", input)){
		for(int i=0; i < strlen(input); i++){
			input[i] -= 7;
			//cout << input << endl;
			
		}
		cout << input << endl;
	}
	
	return 0;
}
			
