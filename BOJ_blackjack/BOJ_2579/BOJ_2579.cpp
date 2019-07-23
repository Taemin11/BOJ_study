#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> stair;
vector<int> dp;

int main() {
	int n;
	int s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		stair.push_back(s);
	}
	dp.push_back(stair[0]);
	dp.push_back(max(stair[0] + stair[1], stair[1]));
	dp.push_back(max(stair[0] + stair[2], stair[1] + stair[2]));
	for (int i = 3; i < n; i++) {
		dp.push_back(max(dp[i - 3] + stair[i - 1] + stair[i], dp[i - 2] + stair[i]));
	}
	cout << dp[n-1];

}