#include <iostream>
using namespace std;
int main() {
    int n, cnt = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << cnt << ' ';
            cnt++;
        }
        cout << endl;
    }
    return 0;
}