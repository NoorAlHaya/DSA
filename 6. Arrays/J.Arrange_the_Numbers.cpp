#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n!=0){
        int m;
        cin >> m;
        int array[m];
        int c=1;
        int p=(m/2)*2;
        if (m%2!=0) {
            for (int i=0; i<(m/2)+1; i++){
                array[i] = c;
                c=c+2;
            }
            for (int i=(m/2)+1; i<m; i++){
                array[i] = p;
                p=p-2;
            }           
            for (int i=0; i<m; i++){
                cout << array[i] << " ";
            }  
            cout << endl;
            n--; 
        }
        else{
            for (int i=0; i<(m/2); i++){
                array[i] = c;
                c=c+2;
            }
            for (int i=(m/2); i<m; i++){
                array[i] = p;
                p=p-2;
            }           
            for (int i=0; i<m; i++){
                cout << array[i] << " ";
            }  
            cout << endl;
            n--; 
        }
    }
}