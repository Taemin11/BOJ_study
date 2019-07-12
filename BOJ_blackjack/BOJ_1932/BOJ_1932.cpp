//ref: https://sesang06.tistory.com/25

#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>


using namespace std;

int dp[501][501];
int maxsum[501][501];


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			cin >> dp[i][j];
		}
	}

	maxsum[0][0] = dp[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				maxsum[i][j] = maxsum[i - 1][j] + dp[i][j];
			else if ( j == i)
				maxsum[i][j] = maxsum[i - 1][j-1] + dp[i][j];
			else
				maxsum[i][j] = max(maxsum[i - 1][j], maxsum[i-1][j-1]) + dp[i][j];
		}
	}
	sort(maxsum[n - 1], maxsum[n - 1] + n);
	cout << maxsum[n - 1][n - 1];

	
}