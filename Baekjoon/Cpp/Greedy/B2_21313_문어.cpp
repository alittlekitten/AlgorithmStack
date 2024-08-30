#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21313 문어
	// 그리디
	int n;
	cin >> n;

	int tmp = n % 2 ? n - 1 : n;

	for (int i = 0; i < tmp; ++i) {
		if (i % 2) cout << "2";
		else cout << "1";
		cout << " ";
	}

	if (n % 2) cout << "3";

	return 0;
}
