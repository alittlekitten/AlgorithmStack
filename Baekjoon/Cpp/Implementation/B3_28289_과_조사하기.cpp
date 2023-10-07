#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28289 과 조사하기
	// 구현
	int p, g, c, n;
	int software = 0;
	int embedded = 0;
	int ai = 0;
	int freshman = 0;
	cin >> p;
	for (int i = 0; i < p; ++i) {
		cin >> g >> c >> n;
		if (g == 1) ++freshman;
		else if (c <= 2) ++software;
		else if (c == 3) ++embedded;
		else if (c == 4) ++ai;
	}

	cout << software << '\n' << embedded << '\n' << ai << '\n' << freshman;

	return 0;
}
