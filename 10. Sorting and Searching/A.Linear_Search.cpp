#include <iostream>
using namespace std;
int main() {
    bool flag = false;
    int n;
    cin >> n;
    int array[n];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }
    int num;
    cin >> num;
    for (int i=0;i<n;i++){
        if (num == array[i]){
            flag = true;
        }
    }
    if (flag){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}