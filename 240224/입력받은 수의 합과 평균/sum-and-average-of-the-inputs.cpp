#include <iostream>
using namespace std;
int main() {
    int n, t, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        sum += t;
    }
    cout.precision(1);
    cout << fixed;
    cout << sum << " " << sum / (n * 1.0);
    return 0;
}