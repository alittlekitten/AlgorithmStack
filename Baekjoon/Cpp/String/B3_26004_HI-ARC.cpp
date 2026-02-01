#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26004 HI-ARC
	// 문자열
	int n;
	string s;
	int cnt[128] = { 0 };
	cin >> n >> s;
	for (int i = 0; i < n; ++i) ++cnt[s[i]];

	cout << min(min(min(min(cnt['H'], cnt['I']), cnt['A']), cnt['R']), cnt['C']);

	return 0;
}
