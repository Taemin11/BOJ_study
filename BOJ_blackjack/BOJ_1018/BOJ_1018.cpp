#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, m;
	char tok;
	string chess;
	string temp;
	int count = 0;
	int tempcount = 32;
	cin >> n;
	cin >> m;
	for (int q = 0; q < n; q++) {
		cin >> temp;
		chess.append(temp);
	}
		
	for (int l = 0; l <= n - 8; l++) {
		for (int c = 0; c <= m - 8; c++) {
			tok = chess.at(l * m + c);
			count = 0;
			for (int i = l; i < l + 8; i++) {
				for (int j = c + i % 2; j < c + 8; j = j + 2) {
					if (chess[i * m + j] != tok) {
						count++;
					}
				}
				for (int j2 = c + abs(i % 2 - 1); j2 < c + 8; j2 = j2 + 2) {
					if (chess[i * m + j2] == tok) {
						count++;
					}
				}
			}
			if (64 - count < count) {
				count = 64 - count;
			}

			if (tempcount > count) {
				tempcount = count;
			}
			
			

		}

	}
	cout << tempcount;

}