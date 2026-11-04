#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string array[n];
    for ( int i=0; i<n;i++){
        cin >> array[i];
    }
    string target;
    cin >> target;
    bool flag=false;
    int l=0;
    int r=n-1;
    while (l<=r){
        int mid=(l+r)/2;
        if ( array[mid]==target){
            flag= true;
            break;
        }
        else if (array[mid] > target){
            r=mid-1;
        }
        else if (array[mid] < target){
            l=mid+1;
        }
    }
    if (flag){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}