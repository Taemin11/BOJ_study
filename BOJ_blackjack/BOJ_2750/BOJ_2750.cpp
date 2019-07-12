
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	
	int n;
	vector<int> sort;
	cin >> n;
	int s;
	
	for (int i=0; i < n; i++) {
		cin >> s;
		sort.push_back(s);
	}
	
	int temp;
	for (int j = 0; j < n; j++) {
		temp = sort[j];
		for (int k = j+1; k < n; k++) {			
			if (temp > sort[k]) {
				temp = sort[k];
				sort[k] = sort[j];
				sort[j] = temp;
			}
			
		}
	}
	
	for (int q = 0; q < n; q++) {
		cout << sort[q] << " ";
	}
	
	return 0;
}
