#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int a, b, v;
	cin >> a >> b >> v;
	int daycount = a - b;
	if ((v - a) % daycount == 0) {
		cout << (v - a) / daycount + 1;
	}
	else {
		cout << (v - a) / daycount + 2;
	}
}