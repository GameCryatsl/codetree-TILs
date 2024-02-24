#include <iostream>
using namespace std;
int main() {
    int n;
    while(1) {
        cin >> n;
        if(n < 25) {
            cout << "Higher";
        }
        else if(n > 25) {
            cout << "Lower";
        }
        else {
            cout << "Good";
            break;
        }
        cout << endl;
    }
    return 0;
}