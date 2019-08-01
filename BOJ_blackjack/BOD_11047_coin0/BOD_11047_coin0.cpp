#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
vector<int> v;
int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), greater<int>());
	
	for (int i = 0; i < n; i++) {
		ans += (k / v[i]);
		k = k % v[i];
	}
	cout << ans;

}