#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, chk = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if((0 <= n) && (n <= 200)) {
            sum += n;
            chk++;
        }
    }
    cout.precision(1);
    cout << fixed;
    cout << sum << " " << (sum * 1.0) / chk;
    return 0;
}