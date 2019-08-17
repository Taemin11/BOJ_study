#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int W[100001];
int V[1001];
int dp[101][100001];

int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	for (int i = 1; i <= n; i++) {
		cin >> W[i];
		cin >> V[i];
	}

	for (int i = 0; i < k; i++) {
		dp[0][i] = 0;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= k; j++) {
			if (j - W[i] < 0) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], V[i] + dp[i - 1][j - W[i]]);
				
			}
			ans = max(dp[i][j], ans);
		}
	}
	cout << ans;
}