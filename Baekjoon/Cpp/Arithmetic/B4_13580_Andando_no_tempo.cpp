#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 13580 Andando no tempo
	// 수학
	vector<int> v;
	int input;
	for (int i = 0; i < 3; ++i) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	if (v[0] == v[1] || v[1] == v[2] || v[0] + v[1] == v[2]) cout << "S";
	else cout << "N";
	
	return 0;
}
