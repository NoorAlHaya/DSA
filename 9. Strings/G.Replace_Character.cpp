#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char c,r;
    cin >> c >> r;
    int s=a.size();
    for (int i=0;i<s;i++){
        if (a[i]==c){
            a[i]=r;
        }
    }
    cout << a << endl;
}