#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6780 Sumac Sequences
	// 수학
	int t1, t2;
	cin >> t1 >> t2;

	int cnt = 0;
	while (t1 >= t2) {
		int tmp = t1 - t2;
		t1 = t2;
		t2 = tmp;
		++cnt;
	}
	cout << cnt + 2;

	return 0;
}
