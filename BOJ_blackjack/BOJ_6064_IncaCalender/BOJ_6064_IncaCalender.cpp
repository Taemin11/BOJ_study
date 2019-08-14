#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int M, N, x, y;
		int ans = -1;
		cin >> M >> N >> x >> y;

		if (N > M) {
			int temp = N;
			N = M;
			M = temp;

			temp = y;
			y = x;
			x = temp;
			
		}
		int n = 0;
		int H = 1;
		int k = 1;
		if (x > y) {			
			for (int i = 0; i < M; i++) {
				H = k * M - (M - N) * i;
				if (H < 0) {
					k = k + 1;
				}
				H = k*M - (M - N) * i;
				if (H >= 0) {
					if (H == x - y) {
						n = i;
						break;
					}
				}				
				n = -1;
			}
		}
		else if (x < y) {
			for (int i = 0; i < M; i++) {
				H = (M - N) * i - M * (k - 1);
				if (H > M) {
					k = k + 1;
				}
				H = (M - N) * i - M * (k - 1);
				if (H <= M) {
					if (H == y - x) {
						n = i;
						break;
					}
				}
				n = -1;
			}
		}
		else {
			if (x > M || y > N) {
				n = -1;
			}
			else {
				n = 0;
			}
		}
		if (n == -1) {
			ans = -1;
		}
		else {
			ans = n * N + y;
		}
		cout << ans << "\n";
	}
}