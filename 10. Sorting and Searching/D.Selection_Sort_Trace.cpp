#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int i=0;i<n-1;i++){
        int min = array[i];
        int intex = i;
        for(int j=i;j<n;j++){
            if (min>array[j]){
                min = array[j];
                intex=j;
            }
        }
        array[intex]=array[i];
        array[i]=min;
        cout << "Pass " << i+1 << ": ";
        for(int i=0;i<n;i++){
            cout << array[i] << " ";
        }
        cout << ", " ;
        cout << "min_selected = " << min;
        cout << endl;
    }
}