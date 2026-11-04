#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bool flag;
    for (int i = 0; i < n; i++) {
        int c=0;
        for (int j = 0; j < n; j++) {
            if (array[i]==array[j]) {
                c++;
            }
        }
        if (c==1) {
            cout << array[i] << " ";
            flag=true;
        }
    }
    if (flag==false) {
        cout << endl;
    }
}