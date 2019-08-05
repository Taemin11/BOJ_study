#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int n;
	cin >> n;

	int* arr;
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		int a;
		int b;
		cin >> a >> b;
		int s = b - a;
		arr[i] = s;
	}
	for (int i = 0; i < n; i++) {
	
		int count = 1;
		int ans = 0;
		int toggler = 1;
		if (arr[i] == 1) {
			ans = 1;
		}
		else if (arr[i] == 2) {
			ans = 2;
		}
		else {
			while (arr[i] > 0) {
				if (toggler == 1) {
					toggler *= -1;
					arr[i] = arr[i] - count;
					
				}
				else {
					toggler *= -1;
					arr[i] = arr[i] - count;
					count++;
					
				}
				ans++;
			}
		}
		cout << ans << " ";
	}
	

}