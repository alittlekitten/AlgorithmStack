#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32432 Attention to the Meeting
	// 수학
	int n, k;
	cin >> n >> k;

	cout << (k - n + 1) / n;

	return 0;
}
