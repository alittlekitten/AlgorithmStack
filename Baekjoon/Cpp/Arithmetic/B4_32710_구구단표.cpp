#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32710 구구단표
	// 수학
	int n;
	bool v[101] = { 0 };
	cin >> n;
	for (int i = 1; i < 10; ++i) {
		v[i] = true;
		for (int j = 1; j < 10; ++j) v[i * j] = true;
	}
	if (v[n]) cout << 1;
	else cout << 0;

	return 0;
}
