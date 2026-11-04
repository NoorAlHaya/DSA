#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n!=0){
        int m;
        cin >> m;
        int array[m];
        int used[m];
        for (int i=0; i<m; i++){
            cin >> array[i];
            used[i]=false;
        }
        int sum;
        cin >> sum;
        int c=0;
        for (int j=0; j<m; j++){
            int a=array[j];
            for (int i=j+1; i<m; i++){
                int b=array[i];
                if (a+b==sum){
                    c++;
                }
            }
        }
        cout << c  << endl;
        n--;
    }
}