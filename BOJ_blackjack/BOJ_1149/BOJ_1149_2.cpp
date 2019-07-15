#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> rgb;

int main() {
	int n;
	cin >> n;
	int a1, a2, a3;
	rgb.push_back(0);
	rgb.push_back(0);
	rgb.push_back(0);

	for (int i = 1; i < n + 1; i++) {
		cin >> a1 >> a2 >> a3;
		rgb.push_back(a1);
		rgb.push_back(a2);
		rgb.push_back(a3);
		rgb[i * 3 + 0] = min(rgb[(i - 1) * 3 + 1], rgb[(i - 1) * 3 + 2]) + rgb[i * 3 + 0];
		rgb[i * 3 + 1] = min(rgb[(i - 1) * 3 + 0], rgb[(i - 1) * 3 + 2]) + rgb[i * 3 + 1];
		rgb[i * 3 + 2] = min(rgb[(i - 1) * 3 + 0], rgb[(i - 1) * 3 + 1]) + rgb[i * 3 + 2];

	
	}
	int temp;
	temp = min(rgb[n*3 + 0], rgb[n*3 + 1]);
	cout << min(temp, rgb[n * 3 + 2]);
}