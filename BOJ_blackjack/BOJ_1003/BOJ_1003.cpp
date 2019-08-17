#include <iostream>
using namespace std;
int fib[41];
int fibo(int n) {
	if (n == 0) {
		fib[0] = 0;
		return 0;
	}
	if (n == 1) { 
		fib[1] = 1;
		return 1; 
	}
	
	if (fib[n] != 0) {
		return fib[n];
	}
	
	else return fib[n] = fibo(n-1) + fibo(n-2);
}

int main() {
	int t;
	cin >> t;
	int n;

	for (int i = 0; i < t; i++) {
		cin >> n;
		fibo(n);
		if (n == 0) cout << 1 << " " << 0 << endl;
		else if (n == 1) cout << 0 << " " << 1 << endl;
		else cout << fib[n-1] << " " << fib[n] << endl;
	
	}
}