#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;

    if( a == 'S') {
        cout << "Superior";
    }
    else if ( a == 'A') {
        cout << "Exccellent";
    }
    else if ( a == 'B') {
        cout << "Good";
    }
    else if ( a == 'C') {
        cout << "Usually";
    }
    else if ( a == 'D') {
        cout << "Effort";
    }
    else cout << "Failure";
    return 0;
}