#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int variable=0;
    if (n==0) {
        variable = 0;
    } 
    else {
        while (n>0) {
            variable = variable*10 + n%10;
            n /= 10;
        }
    }
    cout << variable << endl;
}