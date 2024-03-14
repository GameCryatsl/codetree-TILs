#include <iostream>
using namespace std;
int main() {
    int n, cnt;
    cin >> n;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
                cnt = 1;
            }
            else cnt = n;
        for(int j = 0; j < n; j++) {
            cout << cnt;
            if(i % 2 == 0) {
                cnt++;
            }
            else cnt--;
        }
        cout << endl;
    }
    return 0;
}