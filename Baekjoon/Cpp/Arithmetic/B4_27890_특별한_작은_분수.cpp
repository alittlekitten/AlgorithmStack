#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27890 특별한 작은 분수
	// 수학
	int x, n;
	int cnt = 0;
	cin >> x >> n;
	while (cnt != n) {
		if (x % 2) x = (x * 2) ^ 6;
		else x = (x / 2) ^ 6;
		++cnt;
	}
	cout << x;
	
	return 0;
}
