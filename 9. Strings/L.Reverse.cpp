#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int size = a.size();
    for (int i = size - 1; i >= 0; i--) {
        cout << a[i];
    }
}