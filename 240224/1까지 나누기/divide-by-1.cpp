#include <iostream>
using namespace std;
int main() {
    int n, chk;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        n /= i;
        if(n <= 1) {
            chk = i;
            break;
        }
    }
    cout << chk;
    return 0;
}