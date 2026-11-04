#include <iostream>
using namespace std;
void isPrime(int n){
    for (int i=1;i<=n;i++){
        int c=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                c++;
            }
        }
        if (c==2){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    isPrime(n);
}