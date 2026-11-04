#include <iostream>
using namespace std;
int main(){
    int c;
    cin >> c ;
    for (int i=1;i<=c;i++){
        int n;
        cin >> n;
        int array[n];
        int i1=0;
        int i0=0;
        for (int i=0;i<n;i++){
            cin >> array[i];
            if (array[i]==0){
                i0++;
            }
            else {
                i1++;
            }
        }   
        for (int i=1;i<=i0;i++){
            cout << "0 ";
        }
        for (int i=1;i<=i1;i++){
            if (i!=i1){
                cout << "1 ";
            }
            else {
                cout << "1";
            }   
        }
        cout << endl;
    }   
}   