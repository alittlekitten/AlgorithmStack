#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27961 고양이는 많을수록 좋다
	// 수학
	long long n;
	long long ans = 0;
	long long tmp = 0;
	cin >> n;
	while (tmp < n) {
		if (!tmp) ++tmp;
		else tmp <<= 1;
		++ans;
	}
	cout << ans;

	return 0;
}
