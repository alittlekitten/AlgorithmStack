#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13322 접두사 배열
	// 문자열
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) cout << i << '\n';

	return 0;
}
