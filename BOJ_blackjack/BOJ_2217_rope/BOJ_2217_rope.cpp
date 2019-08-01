#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main() {
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());

	for (int i = n; i > 0; i--) {
		ans = max(i * v[n - i], ans);
	}

	cout << ans;

}