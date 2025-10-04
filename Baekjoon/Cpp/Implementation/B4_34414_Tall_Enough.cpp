#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34414 Tall Enough
	// 구현
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input < 48) {
			cout << "False";
			return 0;
		}
	}
	cout << "True";

	return 0;
}
