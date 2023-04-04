#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27736 찬반투표
	// 구현
	int n, input;
	int app = 0;
	int rej = 0;
	int inv = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input == 1) ++app;
		else if (input == -1) ++rej;
		else ++inv;
	}
	if (inv * 2 >= n) cout << "INVALID";
	else {
		if (app > rej) cout << "APPROVED";
		else cout << "REJECTED";
	}

	return 0;
}
