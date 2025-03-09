#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31229 또 수열 문제야
	// 수학
	int n;
	int a = 1;
	cin >> n;
	// 홀수만 출력
	for (int i = 0; i < n; ++i) {
		cout << a << " ";
		a += 2;
	}

	return 0;
}
