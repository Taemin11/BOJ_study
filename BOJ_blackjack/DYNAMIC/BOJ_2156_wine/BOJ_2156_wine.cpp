#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	
	
	int n;
	cin >> n;

	vector<int> v(n + 1, 0);
	vector<int> dp(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	dp[0] = 0;
	dp[1] = v[1];
	dp[2] = v[1] + v[2];
	
	if (n > 2) {
		for (int i = 3; i <= n; i++) {
			int temp = 0;
			temp = max(dp[i - 1], dp[i - 2] + v[i]);
			dp[i] = max(temp, dp[i - 3] + v[i - 1] + v[i]);
		}
	}

	

	cout << dp[n];

}