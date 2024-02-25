#include <iostream>
using namespace std;
int main() {
    int n, chk = 0;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            chk = 1;
            break;
        }
    }
    if(chk) {
        cout << "N";
    }
    else cout << "C";
    return 0;
}