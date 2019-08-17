#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int n;
	cin >> n;
	int h = (n - 2) / 6;
	int ans = 1;
	int count = 1;
	if (n != 1) {
		while (h >= 0) {
			h = h - count;
			count++;
		}

	}
	cout << count;
}
