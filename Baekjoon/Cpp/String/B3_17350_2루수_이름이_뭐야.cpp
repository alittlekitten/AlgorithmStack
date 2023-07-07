#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17350 2루수 이름이 뭐야
	// 문자열
	int n;
	string s;
	bool chk = false;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s == "anj") chk = true;
	}
	if (chk) cout << "뭐야;";
	else cout << "뭐야?";
	
	return 0;
}
