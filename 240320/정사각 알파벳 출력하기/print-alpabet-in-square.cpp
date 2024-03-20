#include <iostream>
using namespace std;
int main() {
    char c = 'A'; 
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (char)c++;
        }
        cout << endl;
    }
    return 0;
}