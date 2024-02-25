#include <iostream>
using namespace std;
int main() {
    int a, b, c, chk = 0;;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++) {
        if(i % c == 0) {
            chk = 1;
            break;
        }
    }
    if (chk) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}