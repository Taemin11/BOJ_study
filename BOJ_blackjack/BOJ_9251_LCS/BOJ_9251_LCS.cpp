#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main() {
	string n1;
	string n2;
	vector<int> dp;
	cin >> n1;
	cin >> n2;


	
	int len1 = n1.length();
	int len2 = n2.length();

	for (int i = 0; i <= len1; i++) {
		dp.push_back(0);
	}
	int temp = 0;
	for (int i = 1; i <= len2; i++) {
		dp.push_back(0);
		for (int j = 1; j <= len1; j++) {
			if (n1[j-1] == n2[i-1])
				dp.push_back(dp[(len1 + 1) * (i - 1) + (j - 1)] + 1);
			else
				dp.push_back(max(dp[(len1 + 1) * (i) + (j - 1)], dp[(len1 + 1) * (i - 1) + (j)]));
			temp = max(temp, dp.back());
		}
	}
	cout << temp;

	return 0;
}