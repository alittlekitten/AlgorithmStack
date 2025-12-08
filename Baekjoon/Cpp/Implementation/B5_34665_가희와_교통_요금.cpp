#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34665 가희와 교통 요금
	// 구현
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2) cout << 0;
	else cout << 1550;

	return 0;
}
