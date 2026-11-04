#include <iostream>
using namespace std;
int main() {
    int n;
    int v;
    cin >> n >> v;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] == v) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}