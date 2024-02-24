#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= 40; i++) {
        if((i % 2 == 0 && i % 4 != 0) || (i % 7 < 4) || ((i / 8)% 2 == 0)) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}