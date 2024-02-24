#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, chk = 0;
    while(1) {
        cin >> n;
        if(n >= 20 && n >= 30) {
            break;
        }
        sum += n;
        chk++;
    }
    cout.precision(2);
    cout << fixed;
    cout << (1.0 * sum) / chk;
    return 0;
}