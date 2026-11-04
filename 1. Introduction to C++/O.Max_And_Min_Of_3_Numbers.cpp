#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if (a>=b and a>=c and b>=c){
        cout<<"Min = "<<c<<endl;
        cout<<"Max = "<<a<<endl;
    }
    else if (b>=a and b>=c and a>=c){
        cout<<"Min = "<<c<<endl;
        cout<<"Max = "<<b<<endl;
    }
    else if (c>=a and c>=b and a>=b){
        cout<<"Min = "<<b<<endl;
        cout<<"Max = "<<c<<endl;
    }
    else if (a>=b and a>=c and c>=b){
        cout<<"Min = "<<b<<endl;
        cout<<"Max = "<<a<<endl;
    }
    else if (b>=a and b>=c and c>=a){
        cout<<"Min = "<<a<<endl;
        cout<<"Max = "<<b<<endl;
    }
    else if (c>=a and c>=b and b>=a){
        cout<<"Min = "<<a<<endl;
        cout<<"Max = "<<c<<endl;
    }
}