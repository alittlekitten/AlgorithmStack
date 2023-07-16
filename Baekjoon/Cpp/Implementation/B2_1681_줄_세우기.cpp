#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1681 줄 세우기
	// 구현
	int n;
	char l;
	int ans = 0;
	cin >> n >> l;
	for (int i = 0; i < n; ++i) {
		while (to_string(++ans).find(l) != string::npos);
	}
	cout << ans;

	return 0;
}
