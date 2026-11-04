#include <iostream>
using namespace std;
int main() {
    long long a;
    long long b;
    cin >> a >> b;
    long long fact_a = 1;
    long long fact_b = 1;
    if (a == 0 or b == 0) {
        if (a == 0 and b ==0 ){
            fact_a = 1;
            fact_b = 1;
            }
        else if (a == 0) {
            fact_a = 1;
            for (long long i = 1; i <= b; i++) {
            fact_b *= i;
            }
        }
        else if (b == 0) {
            fact_b = 1;
            for (long long i = 1; i <= a; i++) {
            fact_a *= i;
            }
        }
        if (fact_a == fact_b) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        if (a == b){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}