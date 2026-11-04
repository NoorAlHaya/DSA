#include <iostream>
using namespace std;
int HCF(int a, int b){
    int c=1;
    for (int i=1;i<= min(a,b);i++){
        if (a%i==0 && b%i==0){
            c=i;
        }
    }
    return c;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << HCF(a,b);
}   