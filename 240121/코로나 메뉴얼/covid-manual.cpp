#include <iostream>
using namespace std;
int main() {
    int a2, b2, c2, sum = 0;
    char a1, b1, c1;

    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    if(a1 == 'Y' && a2 >= 37) {
        sum++;
    }
    
    if(b1 == 'Y' && b2 >= 37) {
        sum++;
    }

    if (c1 == 'Y' && c2 >= 37) {
        sum++;
    }

    if (sum >= 2) {
        cout << "E";
    }
    else cout << "N";
    return 0;
}