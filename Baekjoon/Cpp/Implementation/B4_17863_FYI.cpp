#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17863 FYI
	// 구현
	int n;
	cin >> n;
	if (n / 10000 == 555) cout << "YES";
	else cout << "NO";

	return 0;
}
