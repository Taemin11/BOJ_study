//ref :https://hyeran-story.tistory.com/51
#include <iostream>
#include <ios>
using namespace std;

int main()
{
	int n;
	int count[10001];
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= 10000; i++) {
		count[i] = 0;
	}
	int maxN = -2e9;
	for (int i = 0; i < n; i++)
	{
		int s;
		cin >> s;
		count[s]++;
		maxN = maxN < s ? s : maxN;
		
	}
	
	for (int i = 1; i <= maxN; i++) {
		for (int j = 0; j < count[i]; j++) {
			cout << i << " ";
		}
	}
	return 0;
}