#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            cout << i * 2 + 2 * j - 1 + 10<< " ";
        }
        cout << endl;
    }
    return 0;
}