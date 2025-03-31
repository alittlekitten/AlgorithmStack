#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33612 피갤컵
	// 구현
	int n;
	cin >> n;
	if (n == 1) cout << "2024 8";
	else if (n == 2) cout << "2025 3";
	else if (n == 3) cout << "2025 10";
	else if (n == 4) cout << "2026 5";
	else if (n == 5) cout << "2026 12";
	
	return 0;
}
