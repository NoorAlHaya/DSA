#include <iostream>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    int size = a.size();
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == ' ') {
            count++;
        }
    }
    cout << count + 1 << endl;
}