#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pn(int s) {
	if (s == 1) return false;
	for (int i = 2; i < s; i++) {
		if (s % i == 0) {
			return false;
		}
	}

	return true;
}


int main() {
	int n;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		if (pn(s)) count++;
	}

	cout << count;
}