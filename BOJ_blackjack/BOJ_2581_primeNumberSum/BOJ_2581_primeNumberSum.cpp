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
	int m = 0;
	int n = 0;
	int sum = 0;
	cin >> m;
	cin >> n;

	vector<int> v;

	for (int i = m; i <= n; i++) {

		if (pn(i)) {
			v.push_back(i);
			sum = sum + i;
		}
	}

	if (v.empty()) v.push_back(-1);

	if (v[0] == -1) {
		cout << v[0];
	}
	else	cout << sum << " " << v[0];
}