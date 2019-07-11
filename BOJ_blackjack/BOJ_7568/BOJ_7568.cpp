//ref : https://www.acmicpc.net/problem/7568
#include <iostream>
#include <vector>
using namespace std;

typedef struct dun {
	int w;
	int h;
}dun;

dun d;
void dungchi(vector<dun> list) {

	vector<int> rank;
	for (int i = 0; i < list.size(); i++) {
		int r = 1;
		for (int j = 0; j < list.size(); j++) {
			if (list.at(i).w < list.at(j).w &&
				list.at(i).h < list.at(j).h) {
				r++;
			}

		}
		rank.push_back(r);
	}
	for (auto r : rank) {
		cout << r << '\n';
	}
}
int main() {
	int n;
	int x, y;
	vector<dun> list;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		d.w = x;
		d.h = y;

		list.push_back(d);
	}
	dungchi(list);
	return 0;
}