#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int R, C;
	while(true){
		scanf("%d, %d", &R, &C);
		int vmaze[R][C];
		for(int i = 0; i < R; i++){
			for(int j = 0; j < R; j++){
				scanf("%d", &vmaze[i][j]);
			}
		}
		int c;
		for(int i = 0; i <= R; i++){
			for(int j =0; j <= C; j++){
				if(vmaze[i][j] == 1){
					c++;
				}
			}
		}
		int d;
		for(int i = 0; i <= R; i++){
			for(int j =0; j <= C; j++){
				if(vmaze[i][j] == 5){
					for(int k = -1; k < 2; k++){
						for(int l = -1; l < 2; l++){
							if(vmaze[i+k][j+l] == 1){
								d++;
							}
						}
					}
				}
			}
		}
		int not_detected = c - d;
		printf("%d %d\n", d, not_detected);
	}
	return 0;
}