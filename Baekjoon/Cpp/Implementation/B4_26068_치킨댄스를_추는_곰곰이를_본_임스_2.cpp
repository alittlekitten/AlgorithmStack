#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26068 치킨댄스를 추는 곰곰이를 본 임스 2
	// 구현
	int n;
	int ans = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		s = s.substr(2, s.size() - 2);
		int day = stoi(s);
		if (day <= 90) ++ans;
	}
	cout << ans;

	return 0;
}
