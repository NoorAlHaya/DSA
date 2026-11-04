#include <iostream>
using namespace std;

int factorial (int n){
    int ans=1;
    for (int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int main() {
	int n;
	int r;
	cin >> n >> r;
	int c=n-r;
	int prn= factorial(n);
	int prr= factorial(r);
	int prrn= factorial(c);
	int deno= prr*prrn;
	int fans= prn/deno;
	cout << fans <<endl;
}