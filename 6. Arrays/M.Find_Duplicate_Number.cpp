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
        for (int i=0; i<m; i++){
            int e= array [i];
            int c=0;
            for (int j=0; j<m; j++){
                if (array[j]==e){
                    c++;
                }
            }
            if (c==2){
                cout << e << endl;
                break;
            }
        }
        n--;
    }   
}