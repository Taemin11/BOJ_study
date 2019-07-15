#include <iostream>
#include <vector>

using namespace std;

unsigned long long dp[101];

unsigned long long fibotri( unsigned long long n) {

	

	if (n == 1) {
		dp[0] = 1;
		return 1;
	}
	if (n == 2) {
		dp[1] = 1;
		return 1;
	}
	if (n == 3) {
		dp[2] = 1;
		return 1;
	}

	if (dp[n] != 0) {
		return dp[n];
	}
	else return dp[n] = fibotri(n - 2) + fibotri(n - 3);
}

int main() {
	


	unsigned long long n;
	cin >> n;
	unsigned long long s[101];
	unsigned long long c;
	for (int i = 0; i < n; i++) {	
		cin >> c;
		s[i] = fibotri(c);
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	return 0;
}