#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lower_bound(int start, int end, vector<int> v, int target) {
	while (start < end) {
		int mid = (start + end) / 2;
		if (v[mid] < target) {
			start = mid + 1;
		}
		else {
			end = mid;
		}
	}
	return end + 1;

}

int main() {
	int n;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}

	cout << lower_bound(0, n - 1, v, 8);
}