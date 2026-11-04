#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    int n2 = 0;
    int n1 = 0;
    int n0 = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] == 2) {
            n2++;
        } else if (array[i] == 1) {
            n1++;
        } else {
            n0++;
        }
    }
    for (int i = 0; i < n2; i++) {
        cout << 2 << " ";
    }
    for (int i = 0; i < n1; i++) {
        cout << 1 << " ";
    }
    for (int i = 0; i < n0; i++) {
        cout << 0 << " ";
    }
    cout << endl;
}
