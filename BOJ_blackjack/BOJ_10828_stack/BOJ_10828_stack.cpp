#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> stack;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string input;
		cin >> input;
		if (!input.compare("push")) {
			int item;
			cin >> item;
			stack.push_back(item);
		}
		else if (!input.compare("pop")) {
			if (!stack.empty()) {
				cout << stack.back() << "\n";
				stack.pop_back();
			}
			else {
				cout << -1 << "\n";
			}

		}
		else if (!input.compare("size")) {
			cout << stack.size() << "\n";
		}
		else if (!input.compare("empty")) {
			cout << stack.empty() << "\n";
		}
		else if (!input.compare("top")) {
			if (!stack.empty()) {
				cout << stack.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
} 