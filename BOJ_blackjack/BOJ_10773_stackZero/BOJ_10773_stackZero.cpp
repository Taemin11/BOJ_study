#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> stack;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input == 0) {
			ans -= stack.back();
			stack.pop_back();
		}
		else {
			stack.push_back(input);
			ans += stack.back();
		}
	}
	cout << ans;
}