#include <iostream>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != ' ') {
            result += a[i];
        }
    }
    cout << result;
}