#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]){
    int i;
    while(cin >> i){
        int res = 0;
        while(i){
            res *= 10;
            res +=  i %10;
            i /= 10;
        }
        cout << res << endl;
    }
    return 0;
}
