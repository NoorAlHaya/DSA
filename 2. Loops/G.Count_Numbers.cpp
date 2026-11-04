#include <iostream>
using namespace std;
int main() {
    int c;
    int p=0;
    int n=0;
    int e=0;
    int o=0;
    cin >> c;
    int i=1;
    while (i<=c) {
        int num;
        cin >> num;
        if (num==0) {
            e++;
        }
        else if (num%2==0 and num>0) {
            e++;
            p++;
        }
        else if (num%2!=0 and num>0) {
            o++;
            p++;
        }
        else if (num%2!=0 and num<0) {
            o++;
            n++;
        }
        else if (num%2==0 and num<0) {
            e++;
            n++;
        }
        i++;
    }
    cout << p << endl << n << endl << e << endl << o << endl;
}