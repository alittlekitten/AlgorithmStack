#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35370 Memories of Passport Control
	// 수학
	int k, s;
	cin >> k >> s;
	cout << s / k + s % k;

	return 0;
}
