//1로 만들기
#include <iostream>
#include <algorithm>

using namespace std;
int dp[1000001];

int one(int n) {
	if (n == 1) {
		dp[1] = 0;
		return 0;
	}
	else if (n == 2) {
		dp[2] = 1;
		return 1;
	}
	else if (n == 3) {
		dp[3] = 1;
		return 1;
	}
	else if (dp[n] != 0) {
		return dp[n];
	}
	else {
		int s1 = n - 1;
		int temp = 1000001;
		if (n % 2 == 0) {
			int s2 = n / 2;
			temp = min(temp, one(s2));
		}

		if (n % 3 == 0) {
			int s3 = n / 3;
			temp = min(temp, one(s3));
		}

		temp = min(temp, one(s1));
	
		return dp[n] = temp + 1;
	}
}


int main() {
	dp[0] = 0;
	int n;
	cin >> n;
	one(n);
	cout << dp[n];

	
}