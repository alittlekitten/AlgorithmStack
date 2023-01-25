#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15051 Maquina de cafe
	// 수학
	int a[3] = { 0 };
	vector<int> v;
	cin >> a[0] >> a[1] >> a[2];
	v.push_back(a[1] * 2 + a[2] * 4);
	v.push_back(a[0] * 2 + a[2] * 2);
	v.push_back(a[0] * 4 + a[1] * 2);
	sort(v.begin(), v.end());
	cout << v[0];

	return 0;
}
