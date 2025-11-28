#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7770 아즈텍 피라미드
	// 수학
	int n;
	cin >> n;

	int block = 0;
	int height = 0;
	while (block <= n) {
		block += 2 * height * height + 2 * height + 1;
		height++;
	}
	cout << height - 1;

	return 0;
}
