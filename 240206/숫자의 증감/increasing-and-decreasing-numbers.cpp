#include <iostream>
using namespace std;
int main() {
    int n;
    char c;
    cin >> c >> n;
    if (c == 'A') {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
    else for (int i = n; i > 0; i--) {
        cout << i << " ";
    }
    return 0;
}