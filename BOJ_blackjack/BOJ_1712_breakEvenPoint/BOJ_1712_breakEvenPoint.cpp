#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
vector<int> v;
int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	int c;
	cin >> c;
	int benefit = c - b;
	int k = 0;

	if (benefit <= 0) {
		cout << -1;
		return 0;
	}

	k = a / benefit + 1;
	

	cout << k;
	return 0;
}