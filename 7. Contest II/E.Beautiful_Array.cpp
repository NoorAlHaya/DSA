#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int e  = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i]!=e) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}