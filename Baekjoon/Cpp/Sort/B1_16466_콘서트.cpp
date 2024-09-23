#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16466 콘서트
	// 정렬
	long long n, input;
	set<long long> s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		s.insert(input);
	}

	long long ans = 1;
	while (1) {
		if (s.find(ans) == s.end()) break;
		++ans;
	}

	cout << ans;

	return 0;
}
