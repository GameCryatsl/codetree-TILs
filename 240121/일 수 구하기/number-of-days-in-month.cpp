#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n % 2 == 0 && !(n == 2) && n < 8) {
        cout << "30";
    }
    else if (n == 2) {
        cout << "28";
    }
    else if (n % 2 == 1 && !(n == 2) && n < 8) {
        cout << "31";
    }
    else if (n % 2 == 1) {
        cout << "30";
    }
    else {
        cout << "31";
    }
    
    return 0;
}