#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31922 이 대회는 이제 제 겁니다
	// 수학
	int a, p, c;
	cin >> a >> p >> c;

	cout << max(a + c, p);

	return 0;
}
