#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28292 개미 수열
	// 애드혹
	int n;
	cin >> n;
	if (n < 3) cout << 1;
	else if (n < 6) cout << 2;
	else cout << 3;

	return 0;
}
