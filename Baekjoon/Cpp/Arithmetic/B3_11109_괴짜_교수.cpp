#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11109 괴짜 교수
	// 수학
	int t, d, n, s, p;;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> d >> n >> s >> p;

		if (d + p * n > n * s) cout << "do not parallelize\n";
		else if (d + p * n == n * s) cout << "does not matter\n";
		else cout << "parallelize\n";
	}

	return 0;
}
