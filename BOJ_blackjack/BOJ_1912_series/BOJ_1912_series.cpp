#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;
vector<int> dp;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}
	dp.push_back(v[0]);
	int temp = dp[0];
	for (int i = 1; i < n; i++) {
		int maxima = (max(dp[i-1] + v[i], v[i]));
		dp.push_back(maxima);
		temp = max(temp,maxima);
	}

	cout << temp;

}