#include <iostream>
using namespace std;
int main() {
    int x;
    int n;
    long long p=1;
    cin >> x >> n;
    int i=1;
    while (i<=n) {
        if (n==0) {
            p = 1;
        } else {
            p *= x;
        }
        i++;
    }
    cout << p << endl;
}