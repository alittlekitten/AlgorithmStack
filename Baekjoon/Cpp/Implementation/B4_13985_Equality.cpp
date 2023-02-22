#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13985 Equality
	// 구현
	int a, b, c;
	string tmp1, tmp2;
	cin >> a >> tmp1 >> b >> tmp2 >> c;
	if (a + b == c) cout << "YES";
	else cout << "NO";

	return 0;
}
