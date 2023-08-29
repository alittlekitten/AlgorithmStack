#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27960 사격 내기
	// 비트마스킹
	int a, b;
	cin >> a >> b;
	cout << (a ^ b);

	return 0;
}
