#include <iostream>
using namespace std;
int main() {
    int a, n, i =0;
    cin >> a >> n;
    while (i < n) {
        a += n;
        cout << a << endl;
        i++;
    }
    return 0;
}