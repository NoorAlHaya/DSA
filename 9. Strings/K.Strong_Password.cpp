#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int size = a.size();
    int l=0;
    int u=0;
    int d=0;
    int s=0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            l++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z') {
            u++;
        }
        else if (a[i] >= '0' && a[i] <= '9') {
            d++;
        }
        else {
            s++;
        }
    }
    if (size == 10 and l>=1 and u>=1 and d>=1 and s>=1) {
        cout << "Strong" << endl;
    }
    else {
        cout << "Weak" << endl;
    }
}