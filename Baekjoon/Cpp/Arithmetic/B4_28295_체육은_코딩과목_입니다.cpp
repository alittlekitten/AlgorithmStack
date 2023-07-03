#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28295 체육은 코딩과목 입니다
	// 수학
	int input;
	int ans = 0; // 북동남서 순
	for (int i = 0; i < 10; ++i) {
		cin >> input;
		ans += input;
	}
	if (ans % 4 == 0) cout << 'N';
	else if (ans % 4 == 1) cout << 'E';
	else if (ans % 4 == 2) cout << 'S';
	else cout << 'W';
	
	return 0;
}
