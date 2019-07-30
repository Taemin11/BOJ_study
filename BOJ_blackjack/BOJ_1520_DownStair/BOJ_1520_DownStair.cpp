#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[501][501];
unsigned long long dp[1000000000];
int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;
	

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int tpoint_x = 0;
	int tpoint_y = 0;
	int k = 0;
	while (tpoint_x != n && tpoint_y != m) {
		if (tpoint_x == 0) {
			if (tpoint_y == 0) {

			}
		}
		else if (tpoint_x == n) {

		}
		else if (tpoint_y == 0) {

		}
		else if (tpoint_y == m) {

		}
		else {

		}

	}

}