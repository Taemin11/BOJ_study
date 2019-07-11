#include <iostream>
#include <vector>
using namespace std;

int distrib(int n) {
	vector<int> vec;
	int tp = n;
	for (int i = 0; i <= 6; i++) {


		if (n > 0) {
			vec.push_back(n % 10);
			n = n / 10;
			tp = tp + vec[i];
		}

	}
	
	return tp;
}

int main() {
	int n;
	cin >> n;
	int i = n-55;
	while (n != distrib(i)) {
		i++;
		if (i >= n) {
			i = 0;
			break;
		}
	}

	cout << i;
}