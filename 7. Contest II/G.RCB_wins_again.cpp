#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int m1=(n/2)-1;
    int m2=(n/2);
    for (int j = 0; j < n/2; j++) {
        cout << array[m1] << " " << array[m2] << " ";
        m1--;
        m2++;
    }
}