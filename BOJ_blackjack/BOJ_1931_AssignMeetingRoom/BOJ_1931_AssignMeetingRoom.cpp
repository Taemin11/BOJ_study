#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
vector<vector<int>> v;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; i++) {

		v.push_back(vector<int>());
		for (int j = 0; j < 2; j++) {
			int s;
			cin >> s;
			v.at(i).push_back(s);

		}
		
		
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {

		if (i == n - 1) {
			ans++;
		}
		for (int j = i + 1; j < n; j++) {
			if (v[j][1] < v[i][1]) {
				j = n;
			}
			else {
				if (v[j][0] >= v[i][1]) {
					i = j - 1;
					j = n;
					ans++;

				}
			}
		}
	}

	cout << ans;
}