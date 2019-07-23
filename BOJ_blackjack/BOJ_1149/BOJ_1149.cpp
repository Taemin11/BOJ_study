
#include <iostream>
#include <algorithm>

using namespace std;
int rgb[1001][3];

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i < n + 1; i++) {
		cin >> rgb[i][0];
		cin >> rgb[i][1];
		cin >> rgb[i][2];

		rgb[i][0] = min(rgb[i-1][1], rgb[i - 1][2]) + rgb[i][0];
		rgb[i][1] = min(rgb[i-1][0], rgb[i - 1][2]) + rgb[i][1];
		rgb[i][2] = min(rgb[i-1][0], rgb[i - 1][1]) + rgb[i][2];
	}
	int temp;
	temp = min(rgb[n][0], rgb[n][1]);
	cout << min(temp, rgb[n][2]);
}
