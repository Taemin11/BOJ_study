#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> stack;
vector<int> input;
vector<char> output;
int main() {
	int n;
	bool no = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		input.push_back(k);
	}
	stack.push_back(0);
	int t = 1;
	for (int j = 0; j < n; j++) {
		while(1) {
			if (input[j] == stack.back()) {
				output.push_back('-');
				stack.pop_back();
				break;
			}
			else if (input[j] >= t) {
				output.push_back('+');
				stack.push_back(t);
				t++;
			}
			else {
				j = n;
				no = 1;
				break;
			}
		}
	}
	if (no == 1) {
		cout << "NO\n";
	}
	else {
		for (int i = 0; i < output.size(); i++) {
			cout << output[i] << "\n";
		}
	}	
}