#include <iostream>
using namespace std;
int main() {
    long n;
    cin >> n;
    long long sum=0;
    long long i=1;
    while (i<=n) {
        sum += i;
        i++;
    }
    cout << sum << endl;
}