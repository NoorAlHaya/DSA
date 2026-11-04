#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i=1;
    long long fact=1;
    while (i<=n){
        fact *= i;
        i++;
    }
    cout << fact << endl;
}