#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<char> stack;

int main() {
	while (1) {
		string input;
		getline(cin, input);
		int ans = 1;
		if (input[0] == '.' && input.size() == 1) break;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(' || input[i] == '[') {
				stack.push_back(input[i]);
			}
			else if (input[i] == ')') {
				if (stack.empty() || stack.back() != '(') {
					ans = 0;
					break;
				}
				else if (stack.back() == '(') {
					stack.pop_back();
				}
			}
			else if (input[i] == ']') {
				if (stack.empty() || stack.back() != '[') {
					ans = 0;
					break;
				}
				else if (stack.back() == '[') {
					stack.pop_back();
				}
			}

		}
		if (ans == 1 && stack.empty()) cout << "yes\n";
		else cout << "no\n";
		stack.clear();
	}
}