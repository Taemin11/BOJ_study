#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int lower_bound_2(int start, int end, vector<int> vv, int target) {
	while (start < end) {
		int mid = (start + end) / 2;
		if (vv[mid + 1] < target) {
			start = mid + 1;
		}
		else {
			end = mid;
		}
	}
	return end + 1;

}

int lis_up(int k, vector<int> s) {
	int lenup = 0;
	v.push_back(-1);
	for (int i = 1; i <= k; i++) {

		if (v.back() < s[i]) {
			v.push_back(s[i]);
			lenup++;
		}
		else {
			int it = lower_bound_2(0, lenup, v, s[i]);
			v[it] = s[i];
		}
	}
	return lenup;
}

int main() {
	int arr[501];
	vector <int> dp;

	int n;
	cin >> n;
	for (int i = 1; i < 500; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		int f1;
		int f2;
		cin >> f1;
		cin >> f2;
		arr[f1] = f2;
	}
	dp.push_back(-1);
	for (int i = 1; i < 500; i++) {
		if (arr[i] != 0) {
			dp.push_back(arr[i]);
		}
	}
		
	cout << n - lis_up(n, dp);
}