#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// String

	int n, m;
	string s;
	int answer = 0;

	cin >> n >> m >> s;

	int cnt = 0; // 체크용
	
	for (int i = 0; i < m - (n*2+1); ++i) {
		if (s[i] == 'I') {
			while (i < m - 2 && s[i + 1] == 'O' && s[i + 2] == 'I') {
				i += 2;
				if (cnt < n) cnt++;
				if (cnt == n) answer++;
			}
		}
		cnt = 0;
	}

	cout << answer;

	return 0;
}
