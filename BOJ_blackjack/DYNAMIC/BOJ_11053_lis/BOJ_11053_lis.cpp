#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lower_bound_2(int start, int end, vector<int> v, int target) {
	while (start < end) {
		int mid = (start + end) / 2;
		if (v[mid+1] < target) {
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
	int ans = 0;
	vector<int> v;
	cin >> n;
	v.push_back(-1);
	for (int i = 1; i <= n; i++) {
		int s;
		cin >> s;
		if (v.back() < s) {
			v.push_back(s);
			ans++;
		}
		else {
			int it = lower_bound_2(0, ans, v, s);
			v[it] = s;
		}
	}

	cout << ans;
}