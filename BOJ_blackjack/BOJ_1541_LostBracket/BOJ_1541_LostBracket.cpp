#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> v;
vector<int> greedy;
int main() {

	string s;
	cin >> s;
	v.push_back(s);
	int k = 1;
	int p = 51;
	int len = v[0].length();
	greedy.push_back(v[0][0]-48);
	for (int i = 1; i < len; i++) {
		if (v[0][i] == '+') {
		}
		else if (v[0][i] == '-') {
			p = min(k, p);
		}
		else {
			if (v[0][i - 1] !='+' && v[0][i - 1] != '-') {
				greedy[k - 1] = greedy[k - 1] * 10 + (v[0][i]-48);	
				k--;
			}
			else {
				greedy.push_back(v[0][i]-48);
			}		
			k++;
		}
		
	}
	int ans1 = 0;
	int ans2 = 0;
	if (p == 51) {
		for (int i = 0; i < k; i++) {
			ans1 = ans1 += greedy[i];
		}
		ans2 = 0;
	}
	else {
		for (int i = 0; i < p; i++) {
			ans1 = ans1 += greedy[i];
		}
		for (int i = p; i < k; i++) {
			ans2 = ans2 += greedy[i];
		}
	}

	cout << ans1 - ans2;
}