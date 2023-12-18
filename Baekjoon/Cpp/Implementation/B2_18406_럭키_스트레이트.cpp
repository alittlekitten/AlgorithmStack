#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18406 럭키 스트레이트
	// 구현
	string s;
	cin >> s;
	int sum1 = 0;
	int sum2 = 0;
	if (s.size() % 2 == 0) {
		for (int i = 0; i < s.size() / 2; ++i) sum1 += s[i];
		for (int i = s.size() / 2; i < s.size(); ++i) sum2 += s[i];
		if (sum1 == sum2) cout << "LUCKY";
		else cout << "READY";
	}
	else cout << "FAIL";

	return 0;
}
