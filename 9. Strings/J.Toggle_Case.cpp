#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int s=a.size();
    for (int i=0;i<s;i++){
        if (a[i]>='A' && a[i]<='Z'){
            a[i]=char(a[i]+32);
        }
        else if (a[i]>='a' && a[i]<='z'){
            a[i]=char(a[i]-32);
        }
    }
    cout << a << endl;
}