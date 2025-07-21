#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31844 창고지기
	// 구현
	string s;
	cin >> s;

	int robot = 0;
	int box = 0;
	int target = 0;
	for (int i = 0; i < 10; ++i) {
		if (s[i] == '@') robot = i;
		else if (s[i] == '#') box = i;
		else if (s[i] == '!') target = i;
	}

	if (robot < box && box < target) cout << target - robot - 1;
	else if (target < box && box < robot) cout << robot - target - 1;
	else cout << -1;

	return 0;
}
