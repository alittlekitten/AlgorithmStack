#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8714 Monety
	// 구현
	int n, input;
	int h = 0;
	int t = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input == 0) ++h;
		else ++t;
	}
	cout << min(h, t);
	
	return 0;
}
