#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32587 Dragged-out Duel
	// 구현
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;

	int win = 0;
	int lose = 0;
	for (int i = 0; i < n; ++i) {
		if (s1[i] == s2[i]) continue;

		if ((s1[i] == 'R' && s2[i] == 'S') || (s1[i] == 'S' && s2[i] == 'P') || (s1[i] == 'P' && s2[i] == 'R')) ++win;
		else ++lose;
	}

	if (win > lose) cout << "victory";
	else cout << "defeat";

	return 0;
}
