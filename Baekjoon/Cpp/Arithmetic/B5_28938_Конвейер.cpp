#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28938 Конвейер
	// 수학
	int n, input;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		cnt += input;
	}
	if (cnt < 0) cout << "Left";
	else if (cnt > 0) cout << "Right";
	else cout << "Stay";

	return 0;
}
