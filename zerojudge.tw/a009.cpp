#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string i;
    while (cin >> i) {
        for (int j = 0 ; j < i.length() ; j++) {
                cout << char(i[j]-7);
        }
        cout << endl;
    }
    return 0;
}
