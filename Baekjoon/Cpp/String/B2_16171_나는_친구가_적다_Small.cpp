#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16171 나는 친구가 적다 (Small)
	// 문자열
	string a, b;
	cin >> a >> b;

	string tmp = "";
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] >= '0' && a[i] <= '9') continue;
		tmp += a[i];
	}

	if (tmp.find(b) == string::npos) cout << 0;
	else cout << 1;

	return 0;
}
