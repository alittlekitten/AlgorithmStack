#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25841 Digit Count
	// 구현
	int minValue, maxValue;
	char c;
	int cnt[128] = { 0 };

	cin >> minValue >> maxValue >> c;
	for (int i = minValue; i <= maxValue; ++i) {
		string s = to_string(i);
		for (int j = 0; j < s.size(); ++j) ++cnt[s[j]];
	}

	cout << cnt[c];

	return 0;
}
