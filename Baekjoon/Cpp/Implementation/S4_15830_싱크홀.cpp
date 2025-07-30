#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15830 싱크홀
	// 구현
	long double v, w, d;
	cin >> v >> w >> d;
	
	long double ans = -1;
	long double t = w / v;
	long double tmp = 0;
	while (tmp < d) {
		tmp += 5 * t * t;
		t *= 1.25; // 속도가 80퍼가 되면 시간은 1.25배 증가 
		++ans;
	}

	cout << ans;

	return 0;
}
