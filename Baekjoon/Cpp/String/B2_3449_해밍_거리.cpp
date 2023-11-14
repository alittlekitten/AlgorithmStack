#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3449 해밍 거리
	// 문자열
	string s1, s2;
	int t;
	cin >> t;

	while (t--) {
		cin >> s1 >> s2;
		int cnt = 0;
		for (int i = 0; i < s1.size(); ++i) {
			if (s1[i] != s2[i]) ++cnt;
		}
		cout << "Hamming distance is " << cnt << ".\n";
	}

	return 0;
}
