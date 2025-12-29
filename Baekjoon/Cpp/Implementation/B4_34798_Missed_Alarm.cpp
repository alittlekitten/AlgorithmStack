#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34798 Missed Alarm
	// 구현
	int h1, m1, h2, m2;
	char c;
	cin >> h1 >> c >> m1 >> h2 >> c >> m2;

	int alarmTime = h1 * 60 + m1;
	int clockTime = h2 * 60 + m2;

	if (clockTime > alarmTime) cout << "YES";
	else cout << "NO";

	return 0;
}
