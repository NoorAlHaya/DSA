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
    int max_ones = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < m; j++) {
            if (array[i][j] == 1) {
                c++;
            }
        }
        if (c >= max_ones) {
            if ( c == max_ones ) {
                continue;
            }
            else {
                max_ones = c;
                index = i;
            }
        }
    }
    if (max_ones != 0) {
        cout << index << endl;
    }
    else {
        cout << -1 << endl;
    }
}