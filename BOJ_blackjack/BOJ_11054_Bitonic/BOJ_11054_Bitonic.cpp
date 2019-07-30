#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;
vector<int> v2;

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

int lis_up(int k, int* s) {
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
	v.clear();
	return lenup;
}

int lis_down(int n, int k, int* s) {
	int lendown = 0;
	v2.push_back(-1);
	for (int i = n; i >= k; i--) {

		if (v2.back() < s[i]) {
			v2.push_back(s[i]);
			lendown++;
		}
		else {
			int it = lower_bound_2(0, lendown, v2, s[i]);
			v2[it] = s[i];
		}
	}
	v2.clear();

	return lendown;
}

int main() {
	int n;


	cin >> n;

	int s[1001];
		
	
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	int temp = 0;
	for (int i = 1; i <= n; i++) {
		
		temp = max(temp, lis_up(i, s) + lis_down(n, i, s));
	}
	
	
	cout << temp-1;

}