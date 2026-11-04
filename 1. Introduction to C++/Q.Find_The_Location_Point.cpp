#include <iostream>
using namespace std;
int main(){
    long long x;
    long long y;
    cin>>x>>y;
    if (x==0 and y==0){
        cout<<"Origin"<<endl;
    }
    else if (x==0 and y!=0){
        cout<<"Y Axis"<<endl;
    }
    else if (x!=0 and y==0){
        cout<<"X Axis"<<endl;
    }
    else if (x>0 and y>0){
        cout<<"1st Quadrant"<<endl;
    }
    else if (x<0 and y>0){
        cout<<"2nd Quadrant"<<endl;
    }
    else if (x<0 and y<0){
        cout<<"3rd Quadrant"<<endl;
    }
    else if (x>0 and y<0){
        cout<<"4th Quadrant"<<endl;
    }
}