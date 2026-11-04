#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        if (i%2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << array[j][i] << " ";
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                cout << array[j][i] << " ";
            }
        }
    }
}