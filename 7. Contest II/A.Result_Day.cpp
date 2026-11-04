#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int pass;
    cin >> pass;
    int p=0;
    int f=0;
    for (int i = 0; i < n; i++) {
        if (array[i] >= pass) {
            p++;
        } else {
            f++;
        }
    }
    cout << "Pass: " << p << endl;
    cout << "Fail: " << f << endl;
}