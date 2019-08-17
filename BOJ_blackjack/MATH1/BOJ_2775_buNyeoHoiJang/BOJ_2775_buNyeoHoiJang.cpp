#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int man(int k, int n) {

	if (n == 1) {
		return 1;
	}
	if (k == 0) {
		return n;
	}
	return man(k - 1, n) + man(k, n - 1);
	
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k;
		int n;
		cin >> k >> n;
		cout << man(k, n) << "\n";
	}

}