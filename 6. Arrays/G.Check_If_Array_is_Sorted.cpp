#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    for (int i=0; i<n-1; i++) {
        if (array[i] > array[i+1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;   
}   