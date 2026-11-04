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
    if (n == 1 or m ==1){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << array[i][j] << " ";
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0) {
                    cout << array[i][j] << " ";
                }
            }
            for (int j = 0; j < m; j++) {
                if (j == m - 1 and i != 0) {
                    cout << array[i][j] << " ";
                }
            }
            for (int j = m - 2; j >= 0; j--) {
                if (i == n - 1) {
                    cout << array[i][j] << " ";
                }
            }
        }
        for (int i = n - 2; i > 0; i--) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    cout << array[i][j] << " ";
                }
            }
        }
    }
}