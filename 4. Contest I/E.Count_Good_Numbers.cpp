#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c=0;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x==0) {
            c++;
        }
        else if (18%x==0 or x%45==0) {
            c++;
        }
    }
    cout << c << endl;
}