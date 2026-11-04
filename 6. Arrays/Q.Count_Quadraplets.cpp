#include <iostream>
using namespace std;

int main() {
    int n;
    int x;

    cin >> n >> x;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {

                    if (array[i] - 2 * array[j] +
                        3 * array[k] - 4 * array[l] == x) {

                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}