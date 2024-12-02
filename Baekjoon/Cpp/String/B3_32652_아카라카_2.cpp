#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32652 아카라카 2
	// 문자열
	int k;
	cin >> k;
	cout << "AKARAKA";
	for (int i = 0; i < k - 1; ++i) cout << "RAKA";

	return 0;
}
