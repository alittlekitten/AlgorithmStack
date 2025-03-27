#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26005 나뭇잎 학회
	// 애드혹
	int n;
	cin >> n;
	if (n == 1) cout << 0;
	else {
		if (n % 2) cout << (n * n) / 2 + 1;
		else cout << (n * n) / 2;
	}

	return 0;
}
