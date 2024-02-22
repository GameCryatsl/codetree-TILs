#include <iostream>
using namespace std;
int main() {
    int n, chk, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> chk;
        if (chk % 2 == 1 && chk % 3 == 0) {
            sum += chk;            
        }
    }
    cout << sum;
    return 0;
}