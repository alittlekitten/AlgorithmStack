#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34052 체육은 수학과목입니다 2
	// 수학
	int t;
	int sum = 0;
	for (int i = 0; i < 4; ++i) {
		cin >> t;
		sum += t;
	}
	if (sum > 1500) cout << "No";
	else cout << "Yes";

	return 0;
}
