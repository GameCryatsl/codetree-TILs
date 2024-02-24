#include <iostream>
using namespace std;
int main() {
    int n, chk=0;
    cin >> n;
    while(1) {
        if(n >= 1000) {
            break;
        }
        else if(n % 2) {
            n = n * 2 + 2;
        }
        else n = 3 * n + 1;
        chk++;
    }
    cout << chk;
    return 0;
}