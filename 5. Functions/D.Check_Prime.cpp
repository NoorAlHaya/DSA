#include <iostream>
using namespace std;
bool isPrime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            c++;
        }
    }
    return c==2;
}
int main(){
    int n;
    cin >> n;
    if (isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}