#include <iostream>

using namespace std;
const int MaxN = 10;
int data[MaxN][MaxN];
int cmd[MaxN];
int R, C;

void reverse();
void turn();
void outputmaze();

int main(void)
{
    int i, j, m;

    while (cin >> R >> C >> m) {
        for (i = 0; i < R; ++i)
            for (j = 0; j < C; ++j)
                cin >> data[i][j];
        for (i = 0; i < m; ++i){ 
            cin >> cmd[i];
        }
        for (i = m - 1; i >= 0; --i) {
            if (cmd[i] == 0) {
                reverse(); 
            }
            else{
                turn(); 
            }
        }

        outputmaze();
        cout<<endl;
    }
    return 0;
}


void reverse()
{
    int i, j;
    int newData[MaxN][MaxN];
    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            newData[j][i] = data[i][C - j -1];
        }
    }

    int temp = R;
    R = C;
    C = temp;

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            data[i][j] = newData[i][j];
}

void turn()
{
    int i, j;
    int newData[MaxN][MaxN];
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            newData[i][j] = data[R - i - 1][j];
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            data[i][j] = newData[i][j];

}
void outputmaze()
{
    int i, j;
    cout << R << ' ' << C << endl;

    for (i = 0; i < R; ++i) {
        for (j = 0; j < C; ++j)
            cout<< data[i][j] <<" ";
        cout << endl;
    }
}