#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33963 돈복사
	// 수학
	int n;
	cin >> n;

	int ans = 0;
	while (to_string(n).size() == to_string(n * 2).size()) {
		++ans;
		n *= 2;
	}
	cout << ans;

	return 0;
}
