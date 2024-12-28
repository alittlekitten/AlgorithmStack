#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32651 인간은 무엇인가
	// 수학
	int n;
	cin >> n;
	if (n <= 100000 && n % 2024 == 0) cout << "Yes";
	else cout << "No";

	return 0;
}
