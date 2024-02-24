#include <iostream>
using namespace std;
int main() {
    int n, chk = 0;
    cin >> n;
    while(1) {
        if(n == 1) {
            break;
        }
        else if(n % 2) {
            n *= 3;
            n++;
        }
        else n /= 2;
        chk++;
    }
    cout << chk;
    return 0;
}