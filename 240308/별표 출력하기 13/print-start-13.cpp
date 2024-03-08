#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        //짝수
        if(i % 2 == 0) {
            for(int j = 0; j < i / 2; j++) {
                cout << "* ";
            }
        }
        else for(int j = 0; j < n - (i / 2); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i > 0; i--) {
        //짝수
        if(i % 2 == 0) {
            for(int j = 0; j < i / 2; j++) {
                cout << "* ";
            }
        }
        else for(int j = 0; j < n - (i / 2); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}