#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    for (int i=1;i<=m;i++){
        for (int j=m-i;j>=1;j--){
            cout << " ";
        }
        for (int k=1;k<=i;k++){
            if(i==1 or k==1 or k==i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i=m-1;i>=1;i--){
        for (int j=m-i;j>=1;j--){
            cout << " ";
        }
        for (int k=1;k<=i;k++){
            if(k==1 or k==i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}