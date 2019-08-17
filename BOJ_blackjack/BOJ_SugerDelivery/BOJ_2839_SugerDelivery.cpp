#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (1) {
		if (n % 5 == 0) {
			ans += n / 5;
			cout << ans;
			break;
		}

		n = n - 3;
		ans++;

		if (n < 0) {
			cout << -1;
			break;
		}
	}

	

}
