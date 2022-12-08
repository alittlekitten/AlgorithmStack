#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 8760 Schronisko
	// 수학
	int z, w, k;
	cin >> z;
	for (int i = 0; i < z; ++i) {
		cin >> w >> k;
		cout << w * k / 2 << '\n';
	}

	return 0;
}
