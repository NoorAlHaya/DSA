#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    int num = 0;
    for (int i=0;i<n;i++){
        cin >> array[i];
        if (array[i] < array[num] and array[i] != array[num]){
            num = i;
        }   
        else if (array[i] == array[num]){
        }   
    }
    cout << array[num] << " " << num+1 << endl;
}