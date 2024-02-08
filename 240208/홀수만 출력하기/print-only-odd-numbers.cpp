#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if(t % 2 == 1 && t % 3 == 0) {
            cout << t << endl;
        }
    }
    return 0;
}