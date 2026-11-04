#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if (marks>90){
        cout<<"Excellent"<<endl;
    }
    else if (marks>80 and marks<90){
        cout<<"Good"<<endl;
    }
    else if (marks>70 and marks<=80){
        cout<<"Fair"<<endl;
    }
    else if (marks>60 and marks<=70){
        cout<<"Meets Expectations"<<endl;
    }
    else if (marks<=60){
        cout<<"Below Par"<<endl;
    }
}