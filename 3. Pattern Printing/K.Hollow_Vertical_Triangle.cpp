#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=i;j++){
            if (i==1 or j==1 or j==i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i=m-1;i>=1;i--){
        for (int j=1;j<=i;j++){
            if (j==1 or j==i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}