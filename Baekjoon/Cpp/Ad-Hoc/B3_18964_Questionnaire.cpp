#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18964 Questionnaire
	// 애드 혹
	int n, x;
	cin >> n;

	int odd = 0;
	int even = 0;
	while (n--) {
		cin >> x;
		if (x % 2) ++odd;
		else ++even;
	}

	if (odd > even) cout << 2 << " " << 1;
	else cout << 2 << " " << 0;

	return 0;
}
