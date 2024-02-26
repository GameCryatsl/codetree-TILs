#include <iostream>
using namespace std;
int main() {
    int n, chk = 0;
    for(int i = 0; i < 5; i++) {
        cin >> n;
        if(n % 3 != 0) {
            chk = 1;
            break;
        }
    }
    if(chk) {
        cout << '0';
    }
    else cout << '1';
    return 0;
}