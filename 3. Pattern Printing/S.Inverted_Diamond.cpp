#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            if (j!=i){
                cout << "*";
            } 
            else {
                cout << "* ";
            }
        }
        for (int j=n-i;j>=1;j--){
            cout << "  ";
        }
        for (int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=2;i<=n;i++){
        for (int j=1;j<=i;j++){
            if (j!=i){
                cout << "*";
            } 
            else {
                cout << "* ";
            }
        }
        for (int j=n-i;j>=1;j--){
            cout << "  ";
        }
        for (int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}