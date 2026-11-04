#include <iostream>
using namespace std;

int main() {
    string a;
    char c;

    cin >> a;
    cin >> c;

    string result = "";

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != c) {
            result += a[i];
        }
    }

    cout << result;
}