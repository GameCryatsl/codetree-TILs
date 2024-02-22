#include <iostream>
using namespace std;
int main() {
    int a, b, sum = 0, chk = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(i % 5 == 0 || i % 7 == 0) {
            sum += i;
            chk++;
        }
    }
    cout.precision(1);
    cout << fixed;
    cout << sum << " " << (float)sum / chk;
    return 0;
}