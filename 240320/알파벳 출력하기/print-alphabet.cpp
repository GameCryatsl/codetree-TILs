#include <iostream>
using namespace std;
int main() {
    char c = 'A';
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << c++;
            if(c > 'Z') {
                c = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}