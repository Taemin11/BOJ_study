#include <iostream>
using namespace std;


int main()
{
	long long a, b, c;
	a = 1;
	b = 1;
	c = 2;
	int n;
	cin >> n;
	if (n == 1 || n == 2) cout << 1;
	else {
		for (int i = 0; i < n - 2; i++) {
			a = b;
			b = c;
			c = (a + b) %15746;
		}
		cout << c;
	}
	return 0;
}
