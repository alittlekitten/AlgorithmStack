#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15080 Every Second Counts
	// 수학
	int h, m, s;
	string tmp;
	cin >> h >> tmp >> m >> tmp >> s;
	int start = h * 3600 + m * 60 + s;
	cin >> h >> tmp >> m >> tmp >> s;
	int end = h * 3600 + m * 60 + s;

	if (start > end) cout << 86400 - start + end;
	else cout << end - start;

	return 0;
}
