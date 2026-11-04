#include <iostream>
using namespace std;
int main() {
    int n;
    int m;
    int f;
    cin >> n >> m >> f;
    int array[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
            if (array[i][j] == f) {
                cout << "true" << endl;
                return 0;
            }
        }
    }
    cout << "false" << endl;
}