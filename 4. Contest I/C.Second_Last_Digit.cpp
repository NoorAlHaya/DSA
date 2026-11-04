#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long second_last_digit = (n / 10) % 10;
    cout << second_last_digit << endl;
}