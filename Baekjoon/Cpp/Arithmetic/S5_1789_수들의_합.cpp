#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1789 수들의 합
	// 수학
	long long s;
	long long n = 0;
	cin >> s;

	// 1부터 다 더해주고 넘어가면 마지막꺼만 빼기
	while (s > 0) s -= ++n;
	if (s) --n;

	cout << n;

	return 0;
}
