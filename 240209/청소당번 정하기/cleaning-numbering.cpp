#include <iostream>
using namespace std;
int main() {
    int n, c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    for(int i = 1; i <= 11; i++) {
        if (i % 12 == 0) {
            c3++;
        }
        else if(i % 3 == 0) {
            c2++;
        }
        else if (i % 2 == 0) {
            c1++;
        }
    }
    cout << c1 << " " << c2 << " " << c3;
    return 0;
}