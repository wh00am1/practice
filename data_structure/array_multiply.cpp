#include <iostream>
#include <iomanip>
#define N 5

using namespace std;

void outputmatrix(int [][N]);

int main(){
	int A[N][N] = {
		1, 2, 3, 4, 5,
		1, 2, 3, 4, 5,
		1, 2, 3, 4, 5,
		1, 2, 3, 4, 5,
		1, 2, 3, 4, 5,
	};
	int B[N][N] = {
		5, 4, 3, 2, 1,
		5, 4, 3, 2, 1,
		5, 4, 3, 2, 1,
		5, 4, 3, 2, 1,
		5, 4, 3, 2, 1,
	};
	int C[N][N], i, j, k, s;

	for (i=0; i < N ; i++){
		for (j=0; j <N ; j++){
			s = 0;
			for (k=0; k < N; k++){
				s = s + A[i][k] * B[k][j];
			}
			C[i][j] = s;

		}

	}
	printf("Matrix A:\n");
	outputmatrix(A);
	printf("Matrix B:\n");
	outputmatrix(B);
	printf("Matrix Out:\n");
	outputmatrix(C);
	return 0;
}

void outputmatrix(int m[N][N]){
	int i, j;
	for (i=0; i< N; i++){
		for(j=0; j<N; j++){
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}