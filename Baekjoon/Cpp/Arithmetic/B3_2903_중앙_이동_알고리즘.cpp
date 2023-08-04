#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2903 중앙 이동 알고리즘
	// 수학
	int n;
	int x = 2;
	cin >> n;
	for (int i = 0; i < n; ++i) x += x - 1;
	
	cout << x * x;

	return 0;
}
