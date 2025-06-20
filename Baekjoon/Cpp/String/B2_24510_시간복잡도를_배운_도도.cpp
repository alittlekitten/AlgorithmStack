#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24510 시간복잡도를 배운 도도
	// 문자열
	int c;
	string s;
	cin >> c;

	int ans = 0;
	while (c--) {
		cin >> s;
		int tmp = 0;
		// string의 size() 메서드는 unsigned int라서 int랑 계산하면 쓰레기값이 나올 가능성이 있다!
		for (int i = 0; i < (int)s.size() - 2; ++i) {
			if (s.substr(i, 3) == "for") ++tmp;
		}
		for (int i = 0; i < (int)s.size() - 4; ++i) {
			if (s.substr(i, 5) == "while") ++tmp;
		}

		if (ans < tmp) ans = tmp;
	}

	cout << ans;

	return 0;
}
