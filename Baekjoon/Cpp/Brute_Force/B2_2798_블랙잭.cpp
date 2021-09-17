#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n, m, input;
	int min = 300000;
	int sum = 0;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if (min > m - (v[i] + v[j] + v[k]) && m - (v[i] + v[j] + v[k]) >= 0) {
					min = m - (v[i] + v[j] + v[k]);
					sum = v[i] + v[j] + v[k];
				}	
			}
		}
	}
	cout << sum;
	return 0;
}
