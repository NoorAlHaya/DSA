#include <iostream>
using namespace std;
int main() {
    string a;
    string b;
    cin >> a ;
    cin >> b;
    int a1=a.size();
    int b1=b.size();
    if (a1<b1){
        for (int i=0;i<b1;i++){
            if (a[i]>b[i]){
                cout << "B" << endl;
                return 0;
            }
            else if (a[i]<b[i]){
                cout << "A" << endl;
                return 0;
            }
            else {
                continue;
            }
        }
    }
    else if (a1>b1){
        for (int i=0;i<a1;i++){
            if (a[i]>b[i]){
                cout << "B" << endl;
                return 0;
            }
            else if (a[i]<b[i]){
                cout << "A" << endl;
                return 0;
            }
            else {
                continue;
            }
        }
    }
    else {
        for (int i=0;i<b1;i++){
            if (a[i]>b[i]){
                cout << "B" << endl;
                return 0;
            }
            else if (a[i]<b[i]){
                cout << "A" << endl;
                return 0;
            }
            else {
                continue;
            }
        }
        cout << "Equal" << endl;
    }
}