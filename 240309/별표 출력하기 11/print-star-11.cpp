#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= 2 * n + 1; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= 2 * n + 1; j++) {
                cout << "* ";
            }
        }   
        else for(int j = 1; j <= 2 * n + 1; j++) {
            if(j % 2 == 1) {
                cout << "* ";
            }
            else cout << "  ";
        } 
        cout << endl;
    }
    return 0;
}