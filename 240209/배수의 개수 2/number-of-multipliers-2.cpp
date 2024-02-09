#include <iostream>
using namespace std;
int main() {
    int cnt = 0, n;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 2) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}