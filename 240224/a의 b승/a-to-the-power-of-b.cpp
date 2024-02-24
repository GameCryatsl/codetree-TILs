#include <iostream>
using namespace std;
int main() {
    int a, b, sum = 1;
    cin >> a >> b;
    for(int i = 0; i < b; i++) {
        sum *= a;
    }
    cout << sum;
    return 0;
}