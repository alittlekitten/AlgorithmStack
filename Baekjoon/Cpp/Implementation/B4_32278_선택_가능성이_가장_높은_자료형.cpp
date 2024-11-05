#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32278 선택 가능성이 가장 높은 자료형
	// 구현
	long long n;
	cin >> n;
	if (n >= -32768 && n < 32768) cout << "short";
	else if (n >= -2147483648 && n < 2147483648) cout << "int";
	else cout << "long long";

	return 0;
}
