#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, w, n;
		cin >> h >> w >> n;
		int f = n % h;
		int s = n / h;
		if (n % h == 0) {
			f = h;
			s = s - 1;
		}		
		if (n < h * 9) {
			cout << f << 0 << s + 1;
		}
		else {
			cout << f << s + 1;
		}

		cout << " ";
	}


}