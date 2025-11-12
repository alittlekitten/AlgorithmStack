#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9517 아이 러브 크로아티아
	// 구현
	int k, n, t;
	char z;
	cin >> k >> n;

	int tmp = 0;
	while (n--) {
		cin >> t >> z;
		tmp += t;
		if (tmp >= 210) {
			cout << k;
			break;
		}
		if (z == 'T') {
			++k;
			if (k == 9) k = 1;
		}
	}

	return 0;
}
