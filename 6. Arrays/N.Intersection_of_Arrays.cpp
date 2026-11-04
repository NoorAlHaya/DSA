#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int array1[n];

        for (int i = 0; i < n; i++) {
            cin >> array1[i];
        }

        int m;
        cin >> m;

        int array2[m];
        bool used[m];

        for (int i = 0; i < m; i++) {
            cin >> array2[i];
            used[i] = false;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (array1[i] == array2[j] && used[j] == false) {
                    cout << array1[i] << " ";
                    used[j] = true;
                    break;
                }
            }
        }

        cout << endl;
    }
}