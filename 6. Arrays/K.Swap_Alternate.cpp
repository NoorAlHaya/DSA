#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n!=0){
        int m;
        cin >> m;
        int array[m];
        for (int i=0; i<m; i++){
            cin >> array[i];
        }
        for (int i=0; i<m; i+=2){
            if (i+1<m){
                swap(array[i], array[i+1]);
            }
        }
        for (int i=0; i<m; i++){
            cout << array[i] << " ";
        }
        cout << endl;   
        n--;
    }
}