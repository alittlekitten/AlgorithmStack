#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31607 和の判定 (Sum Checker)
	// 수학
	int a, b, c;
	vector<int> v;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	if (v[0] + v[1] == v[2]) cout << "1";
	else cout << "0";

	return 0;
}
