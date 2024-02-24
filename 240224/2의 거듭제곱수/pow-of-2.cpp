#include <iostream>
using namespace std;
int main() {
    int n, sum = 1, chk = 0;
    cin >> n;
    while(1) {
        sum *= 2;
        chk++;
        if(n == sum) {
            break;
        }
    }
    cout << chk;
    return 0;
}