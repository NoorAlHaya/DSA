#include <iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    cin >> n;
    if (n==0) {
        cout << 0;
    } 
    else {
        while (n>0) {
            sum += n%10;
            n /= 10;
        }
    }
    cout << sum << endl;
}