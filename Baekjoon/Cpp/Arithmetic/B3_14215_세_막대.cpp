#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 14215 세 막대
	// 수학
	vector<int> v;
	int a, b, c;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	if (v[0] + v[1] > v[2]) cout << v[0] + v[1] + v[2];
	else cout << v[0] + v[1] + v[0] + v[1] - 1;

	return 0;
}
