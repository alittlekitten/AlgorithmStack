#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1769 3의 배수
	// 수학
	string s;
	cin >> s;
	int cnt = 0;
	while (s.size() != 1) {
		int sum = 0;
		for (int i = 0; i < s.size(); ++i) sum += (int)s[i] - 48;
		s = to_string(sum);
		++cnt;
	}
	cout << cnt << '\n';
	if (s == "3" || s == "6" || s == "9") cout << "YES";
	else cout << "NO";

	return 0;
}
