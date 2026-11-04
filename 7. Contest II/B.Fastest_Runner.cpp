#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int max = array[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] <= max) {
            max = array[i];
            index = i;
        }
    }
    cout << index+1 << endl;
}