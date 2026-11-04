#include <iostream>
using namespace std;
int main() {
    int n;
    int v;
    cin >> n >> v;
    int c = 0;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] == v) {
            c++;
        }
    }
    cout << c << endl;
}