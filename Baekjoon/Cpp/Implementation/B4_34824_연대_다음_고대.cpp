#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34824 연대 다음 고대
	// 구현
	int n;
	string s;
	cin >> n;

	bool chk = false;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s == "yonsei") {
			chk = true;
			break;
		}
		if (s == "korea") break;
	}
	if (chk) cout << "Yonsei Won!";
	else cout << "Yonsei Lost...";

	return 0;
}
