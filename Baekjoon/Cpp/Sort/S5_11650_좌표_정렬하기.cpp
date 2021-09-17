#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int>& v1, vector<int>& v2) {
	if (v1[0] == v2[0]) return v1 < v2;
	return v1 < v2;
}

int main() {
	int n, input1, input2;
	vector<vector<int>> v1;
	vector<int> v2;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input1 >> input2;
		v2.push_back(input1);
		v2.push_back(input2);
		v1.push_back(v2);
		v2.clear();
	}

	sort(v1.begin(), v1.end(), cmp);
	
	for (int i = 0; i < n; ++i) {
		cout << v1[i][0] << " " << v1[i][1] << '\n';
	}

	return 0;
}
