#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> stack;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		for (int i = 0; i < input.length(); i++) {
			if (strcmp(input[i],"(")) {
				stack.push_back(input);
			}
			if (!input[i].compare(")")) {
				stack.pop_back();
			}
		}
	}
	cout << ans;
}