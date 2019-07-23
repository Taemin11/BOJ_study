//refer : https://www.crocus.co.kr/583
//refer : https://junho0956.tistory.com/22
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>> wire;
vector<int> dp;

int lower_bound(int start, int end, vector<int> v, int target) {
	int mid;
	while (start < end) {
		mid = (start + end) / 2;
		if (v[mid] < target) start = mid + 1;
		else end = mid;
	}
	return end + 1;
}

int main() {
	int count = 0;
	int cnt = 0;
	int n;
	int f, s;
	int s1, s2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1;
		cin >> s2;
		wire.push_back(make_pair(f, s));
	}
	sort(wire.begin(), wire.end());
	dp.push_back(wire[0].second);

	for (int i = 1; i < n; i++) {
		if (dp[count] < wire[i].second){
			dp[++count] = wire[i].second;
		}
		else {
			int ans = lower_bound(0, count, dp, wire[i].second);
			dp[ans - 1] = wire[i].second;
			cnt++;
		}
	}
	cout << cnt;

}
