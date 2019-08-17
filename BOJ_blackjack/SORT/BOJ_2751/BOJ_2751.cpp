
#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& v, int start, int end, int mid) {
	vector<int> ret;
	int i = start; 
	int j = mid + 1;
	int count = 0;

	while (i <= mid && j <= end) {
		if (v[i] < v[j])
			ret.push_back(v[i++]);
		else if (v[i] > v[j])
			ret.push_back(v[j++]);
	}

	while (i <= mid) {
		ret.push_back(v[i++]);
	}
	while (j <= end) {
		ret.push_back(v[j++]);
	}

	for (int k = start; k <= end; k++) {
		v[k] = ret[count++];
	}
}

void mergesort(vector<int>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		mergesort(v, start, mid);
		mergesort(v, mid + 1, end);
		merge(v, start, end, mid);
	}

	
}

int main()
{

	int n;
	vector<int> sort;
	
	cin >> n;
	int s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		sort.push_back(s);
	}
	mergesort(sort, 0, n-1);
	for (int q = 0; q < n; q++) {
		cout << sort[q] << " ";
	}
	return 0;
}


