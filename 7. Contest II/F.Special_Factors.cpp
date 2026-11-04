#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool f = false;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i%10 ==2 or i%10 ==7) {
                cout << i << " ";
                f = true;
            }
        }
    }
    if (f == false) {
        cout << -1;
    }
}