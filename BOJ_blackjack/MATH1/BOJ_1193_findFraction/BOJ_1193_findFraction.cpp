#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count = 0;
	while (n >= 1) {
		count++;
		n = n - count;
	}
	if (count % 2 == 1) {
		cout << n * (-1) + 1 << "/" << count + n;
	}
	else {
		cout << count + n << "/" << n * (-1) + 1;
	}
}