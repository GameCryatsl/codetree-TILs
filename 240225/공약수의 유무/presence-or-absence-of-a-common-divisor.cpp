#include <iostream>
using namespace std;
int main() {
    int a, b, chk1 = 0, chk2 = 0, result = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(1920 % i == 0) {
            chk1 = 1;
        }
        if(2880 % i == 0) {
            chk2 = 1;
        }
        if(chk1 && chk2) {
            result = 1;
            break;
        }
    }
    cout << result;
    return 0;
}