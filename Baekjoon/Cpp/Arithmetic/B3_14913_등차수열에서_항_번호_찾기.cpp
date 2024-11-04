#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14913 등차수열에서 항 번호 찾기
	// 수학
	int a, d, k;
	cin >> a >> d >> k;

	if ((k - a) % d != 0 || (k - a) / d < 0) cout << "X";
	else cout << (k - a) / d + 1;

	return 0;
}
