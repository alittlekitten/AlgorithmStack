#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26772 Poziome serca
	// 구현
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) cout << " @@@   @@@  ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "@   @ @   @ ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "@    @    @ ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "@         @ ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << " @       @  ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "  @     @   ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "   @   @    ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "    @ @     ";
	cout << '\n';

	for (int i = 0; i < n; ++i) cout << "     @      ";

	return 0;
}
