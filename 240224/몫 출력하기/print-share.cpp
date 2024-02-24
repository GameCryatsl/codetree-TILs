#include <iostream>
using namespace std;
int main() {
    int n, chk = 0;
    while(chk < 3) {
        cin >> n;
        if(n % 2 == 0) {
            cout << n / 2 << endl;
            chk++;
        }
    }
    return 0;
}