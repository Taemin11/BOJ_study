//refer : https://lmcoa15.tistory.com/88
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int temp = 0;
vector<int> vec;

void dfs(int pos, int cnt, int sum) {
	if (cnt == 3) {
		if (sum <= m) {
			
			temp = max(temp, sum);
		}
		return;
	}
	if (sum > m || pos >= n)
		return;

	dfs(pos + 1, cnt + 1, sum + vec[pos]);
	dfs(pos + 1, cnt, sum);
}

int main() {
	cin >> n >> m;
	vec = vector<int>(n, 0);
	
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	dfs(0, 0, 0);
	cout << temp;
	return 0;
	
}