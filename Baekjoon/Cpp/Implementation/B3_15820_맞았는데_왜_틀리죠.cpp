#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15820 맞았는데 왜 틀리죠?
	// 구현
	int s1, s2, x, y;
	cin >> s1 >> s2;

	while (s1--) {
		cin >> x >> y;
		if (x != y) {
			cout << "Wrong Answer";
			return 0;
		}
	}

	while (s2--) {
		cin >> x >> y;
		if (x != y) {
			cout << "Why Wrong!!!";
			return 0;
		}
	}

	cout << "Accepted";

	return 0;
}
