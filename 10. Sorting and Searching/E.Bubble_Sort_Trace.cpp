#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }
    for (int i=n-1;i>=1;i--){
        int c=0;
        for(int j=0;j<i;j++){
            // [0,i) is unsorted so sorting that.
            if (array[j+1]<array[j]){
                swap(array[j],array[j+1]);
                c++;
            }
        }
        cout << "Pass " << i+1 << ": ";
        for (int j=0;j<n;j++){
            cout << array[j] << " ";
        }
        cout << ", swaps = " << c << endl;
        if (c==0){
            return 0;
        }
    }
}