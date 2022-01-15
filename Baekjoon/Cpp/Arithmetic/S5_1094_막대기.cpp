#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1094 막대기
	int x;
	int cnt = 0;
	cin >> x;
	
	while (x) {
		if (x % 2 == 1) cnt++;
		x /= 2;
	}
	cout << cnt;

	return 0;
}