#include <iostream>
using namespace std;
long long countZeros(long long n){
    long long c=0;
    if (n==0){
        c=1;
    }
    else {
        while (n > 0) {
            if (n % 10 == 0) {
                c++;
            }
            n /= 10;
        }
    }
    return c;
}
int main() {
    long long n;
    cin >> n;
    cout << countZeros(n);  
}   