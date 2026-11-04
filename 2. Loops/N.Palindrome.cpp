#include <iostream>
using namespace std;
int main() {
    long long c;
    cin >> c;
    long long n=c;
    long long variable=0;
    if (n==0) {
        variable = 0;
    } 
    else {
        while (n>0) {
            variable = variable*10 + n%10;
            n /= 10;
        }
    }
    if (variable == c) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}